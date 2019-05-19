
        
                def declaration_with_comment(node)
          buffer = processed_source.buffer
          begin_pos = get_source_range(node, comments_as_separators).begin_pos
          end_line = buffer.line_for_position(node.loc.expression.end_pos)
          end_pos = buffer.line_range(end_line).end_pos
          Parser::Source::Range.new(buffer, begin_pos, end_pos)
        end
    
            def on_send(node)
          erb_new_with_non_keyword_arguments(node) do |arguments|
            return if correct_arguments?(arguments)
    
            def message_for_normal_block(variable, all_arguments)
          if all_arguments.none?(&:referenced?) &&
             !define_method_call?(variable)
            if all_arguments.count > 1
              'You can omit all the arguments if you don't care about them.'
            else
              'You can omit the argument if you don't care about it.'
            end
          else
            message_for_underscore_prefix(variable)
          end
        end