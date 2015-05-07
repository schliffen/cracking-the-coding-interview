#ifndef DIGRAPH_H
#define DIGRAPH_H

#include <deque>
#include <vector>
#include <string>

class DiGraph
{
public:
                                    DiGraph(std::string label);

    void                            connect(DiGraph* pNode);

    const std::vector<DiGraph*>&    getConnectedNodes() const;

    bool                            getPathTo(DiGraph* pTarget,
                                              std::deque<DiGraph *> &path,
                                              std::vector<DiGraph*>& visited);

private:
    std::vector<DiGraph*>       m_nodes;
    std::string                 m_label;
};

#endif // DIGRAPH_H
