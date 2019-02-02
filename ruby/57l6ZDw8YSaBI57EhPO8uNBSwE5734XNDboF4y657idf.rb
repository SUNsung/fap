
        
        
def pathutil_relative
  Pathutil.new(DOC_PATH).relative_path_from(COL_PATH).to_s
end
    
          #
    
      def self.jekyll_bin; source_dir.join('exe', 'jekyll'); end
    
                  Jekyll.logger.info 'LiveReload address:',
                                 'http://#{opts['host']}:#{opts['livereload_port']}'
            end
          end
          @thread.abort_on_exception = true
        end
    
              em_opts = {}
          super(em_opts)
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
        private
    
        def url
      @url ||= URL.parse request.base_url
    end
    
            css('h1 + code').each do |node|
          node.before('<p></p>')
          while node.next_element.name == 'code'
            node.previous_element << ' '
            node.previous_element << node.next_element
          end
          node.previous_element.prepend_child(node)
        end
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
            if h1 = at_css('h1')
          h1.prepend_child(css('.view-source', '.improve-docs'))
        end
    
    end
    
          if failed_attributes.any?
        fail Devise::Models::MissingAttribute.new(failed_attributes)
      end
    end
    
          protected
    
      @release_paths = (1..count.to_i).map do
    TestApp.cap('deploy')
    stdout, _stderr = run_vagrant_command('readlink #{TestApp.current_path}')
    
    World(RemoteCommandHelpers)

    
    module VagrantHelpers
  extend self
    
        def hostfilter
      ['--hosts HOSTS', '-z',
       'Run SSH commands only on matching hosts',
       lambda do |value|
         Configuration.env.add_cmdline_filter(:host, value)
       end]
    end
    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
      end
    
          def role_properties_for(rolenames)
        roles = rolenames.to_set
        rps = Set.new unless block_given?
        roles_for(rolenames).each do |host|
          host.roles.intersection(roles).each do |role|
            [host.properties.fetch(role)].flatten(1).each do |props|
              if block_given?
                yield host, role, props
              else
                rps << (props || {}).merge(role: role, hostname: host.hostname)
              end
            end
          end
        end
        block_given? ? nil : rps
      end
    
    LogStash::Bundler.setup!
    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end

    
    if (/cygwin|mswin|mingw|bccwin|wince|emx/ =~ RUBY_PLATFORM) != nil
  puts '## Set the codepage to 65001 for Windows machines'
  `chcp 65001`
end
    
    # The project root directory
$root = ::File.dirname(__FILE__)
    
        def generate(site)
      site.write_category_indexes
    end
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
          Dir.chdir(code_path) do
        code = file.read
        @filetype = file.extname.sub('.','') if @filetype.nil?
        title = @title ? '#{@title} (#{file.basename})' : file.basename
        url = '/#{code_dir}/#{@file}'
        source = '<figure class='code'><figcaption><span>#{title}</span> <a href='#{url}'>download</a></figcaption>\n'
        source += '#{HighlightCode::highlight(code, @filetype)}</figure>'
        TemplateWrapper::safe_wrap(source)
      end
    end
  end
    
        private
    
      context 'called with four colors' do
    it 'applies different colors to all sides' do
      rule = 'border-color: #00f #0f0 #f00 #ff0'
    
      context 'called with multiple prefixes' do
    it 'applies the prefixes to the property' do
      rule = '-moz-appearance: none; ' +
             '-ms-appearance: none; ' +
             'appearance: none;'