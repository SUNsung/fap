
        
                def each_unnecessary_space_match(node, &blk)
          each_match_range(
            contents_range(node),
            MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX,
            &blk
          )
        end
      end
    end
  end
end

    
              add_offense(node)
        end
    
                  [offense.line, '#{indent}#{carets} #{offense.message}\n']
            end