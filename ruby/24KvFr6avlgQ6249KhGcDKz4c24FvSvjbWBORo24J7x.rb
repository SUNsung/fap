
        
              def core_gem_names
        %w(capistrano airbrussh rake sshkit net-ssh) & Gem.loaded_specs.keys
      end
    
            def on_send(node)
          return unless match_call?(node) &&
                        (!node.value_used? || only_truthiness_matters?(node)) &&
                        !(node.parent && node.parent.block_type?)
    
                previous.push(when_node.conditions)
          end
        end
    
            def variables_in_node(node)
          if node.or_type?
            node.node_parts
                .flat_map { |node_part| variables_in_node(node_part) }
                .uniq
          else
            variables_in_simple_node(node)
          end
        end
    
            private
    
            it 'registers an offense for #{type} not beginning '\
          'and ending with a blank line' do
          inspect_source(source)
          expect(cop.messages).to eq([missing_begin, missing_end])
        end