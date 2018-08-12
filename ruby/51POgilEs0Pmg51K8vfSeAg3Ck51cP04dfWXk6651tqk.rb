
        
          # Clean the keg of formula @f
  def clean
    ObserverPathnameExtension.reset_counts!
    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
          # This returns the keys (or ids) that are in the string.
      #
      # @return [<Array<String>]
      def keys
        regexp = /^#\s*VAGRANT-BEGIN:\s*(.+?)$\r?\n?(.*)$\r?\n?^#\s*VAGRANT-END:\s(\1)$/m
        @value.scan(regexp).map do |match|
          match[0]
        end
      end
    
        # use Feedbag as a backup to Google Feeds Api
    if rss_url.nil?
      rss_url = Feedbag.find(web_url).first
      if rss_url.nil?
        suggested_paths = ['/rss', '/feed', '/feeds', '/atom.xml', '/feed.xml', '/rss.xml', '.atom']
        suggested_paths.each do |suggested_path|
          rss_url = Feedbag.find('#{web_url.chomp('/')}#{suggested_path}').first
          break if rss_url
        end
      end
    end
  end
    
      def ruby_prefix
    RbConfig::CONFIG['prefix']
  end
    
            def validate!
          super
          if @pod_name.nil? && !@wipe_all
            # Security measure, to avoid removing the pod cache too agressively by mistake
            help! 'You should either specify a pod name or use the --all flag'
          end
        end
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
            self.arguments = [
          CLAide::Argument.new(%w(NAME DIRECTORY), false),
        ]
    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
          if File.symlink?(code_path)
        return 'Code directory '#{code_path}' cannot be a symlink'
      end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end