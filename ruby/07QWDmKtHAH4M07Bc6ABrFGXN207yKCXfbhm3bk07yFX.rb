
        
            def initialize
      @pages = {}
    end
    
        def document?
      @content =~ DOCUMENT_RGX
    end
    
        def error?
      code == 0 || code != 404 && code != 403 && code >= 400 && code <= 599
    end
    
            def store_pages(store)
          instrument 'info.doc', msg: 'Fetching redirections...'
          with_redirections do
            instrument 'info.doc', msg: 'Continuing...'
            super
          end
        end
    
          def root
        css('.nav-index-group').each do |node|
          if heading = node.at_css('.nav-index-group-heading')
            heading.name = 'h2'
          end
          node.parent.before(node.children)
        end
    
            def swap_range(corrector, range1, range2)
          src1 = range1.source
          src2 = range2.source
          corrector.replace(range1, src2)
          corrector.replace(range2, src1)
        end
      end
    end
  end
end

    
              ignored_end_pos = if ignored_loc.respond_to?(:heredoc_body)
                              ignored_loc.heredoc_end.end_pos
                            else
                              ignored_loc.expression.end_pos
                            end
          ignored_end_pos >= node.source_range.end_pos
        end
      end
    
                  add_offense(
                node, location: arguments[i].source_range, message: message
              )
            end
          end
        end
    
            def variable_type(variable)
          if variable.explicit_block_local_variable?
            'block local variable'
          else
            'block argument'
          end
        end