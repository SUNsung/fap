
        
              output = @options[:output] = @args.shift
      raise 'Error: --from required when using --recursive.' unless @options[:from]
      raise 'Error: --to required when using --recursive.' unless @options[:to]
      unless File.directory?(@options[:input])
        raise 'Error: '#{@options[:input]}' is not a directory'
      end
      if @options[:output] && File.exist?(@options[:output]) &&
        !File.directory?(@options[:output])
        raise 'Error: '#{@options[:output]}' is not a directory'
      end
      @options[:output] ||= @options[:input]
    
            def parent_block_node(node)
          node.each_ancestor(:block).first
        end
      end
    end
  end
end
