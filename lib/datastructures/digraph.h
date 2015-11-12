#ifndef DIGRAPH_H
#define DIGRAPH_H

#include <deque>
#include "lib/datastructures/string.h"
#include "lib/datastructures/vector.h"

class DiGraph {
    public:
        DiGraph(ctci::string label);

        void                            connect(DiGraph* pNode);

        const ctci::vector<DiGraph*>&    getConnectedNodes() const;

        bool                            getPathTo(DiGraph* pTarget,
                std::deque<DiGraph*>& path,
                ctci::vector<DiGraph*>& visited);

    private:
        ctci::vector<DiGraph*>       m_nodes;
        ctci::string                 m_label;
};

#endif // DIGRAPH_H
