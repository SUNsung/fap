
        
                rows.each do |row|
          line = row.values.each_with_index.map do |value, col|
            value.to_s.ljust(col_widths[col])
          end.join(' ').rstrip
          line = color.colorize(line, row.color) if row.color
          puts line
        end
      end
    
          def stage_set?
        !!fetch(:stage, false)
      end
    
        def deploying?
      fetch(:deploying, false)
    end
  end
end
