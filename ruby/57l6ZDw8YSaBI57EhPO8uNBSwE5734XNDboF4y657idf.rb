
        
                def variables_in_node(node)
          if node.or_type?
            node.node_parts
                .flat_map { |node_part| variables_in_node(node_part) }
                .uniq
          else
            variables_in_simple_node(node)
          end
        end