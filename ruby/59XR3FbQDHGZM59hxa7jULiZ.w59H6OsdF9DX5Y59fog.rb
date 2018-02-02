
        
        def site_configuration(overrides = {})
  build_configs({
    'source'      => source_dir,
    'destination' => dest_dir
  }, build_configs(overrides))
end
    
        Jekyll::Commands::Build.process({'source' => 'docs'})
    
    Jekyll::Deprecator.process(ARGV)
    
      def all_groups(current_user)
    groups = []
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
          super
    end
    
          if File.symlink?(code_path)
        return 'Code directory '#{code_path}' cannot be a symlink'
      end
    
            def show
          @stock_movement = scope.find(params[:id])
          respond_with(@stock_movement)
        end
    
      config_name 'codec'
    
      def _nt_in_expression
    start_index = index
    if node_cache[:in_expression].has_key?(index)
      cached = node_cache[:in_expression][index]
      if cached
        cached = SyntaxNode.new(input, index...(index + 1)) if cached == true
        @index = cached.interval.end
      end
      return cached
    end