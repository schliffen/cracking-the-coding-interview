#include "digraph.h"

DiGraph::DiGraph(std::string label):
    m_nodes(),
    m_label(label)
{
}

void DiGraph::connect(DiGraph *pNode)
{
    m_nodes.push_back(pNode);
}

const std::vector<DiGraph *> &DiGraph::getConnectedNodes() const
{
    return m_nodes;
}

bool DiGraph::getPathTo(DiGraph* pTarget, std::vector<DiGraph*>& path, std::vector<DiGraph*>& visited)
{
    for (int i = 0; i < m_nodes.size(); i++)
    {
        DiGraph* pOther = m_nodes[i];

        for (int j = 0; j < visited.size(); j++)
            if (visited[j] == pOther)
                return false;

        visited.push_back(pOther);

        if (pOther == pTarget)
        {
            return true;
        }
        bool found = pOther->getPathTo(pTarget, path, visited);

        if (found)
        {
            path.push_back(pOther);
            return true;
        }
    }
    return false;
}
