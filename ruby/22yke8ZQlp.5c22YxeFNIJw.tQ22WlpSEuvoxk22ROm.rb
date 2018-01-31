
        
            alias_method :blank?, :empty?
    
    module Docs
  class PageDb
    attr_reader :pages
    
          def inherited(subclass)
        super
        subclass.base_url = base_url
        subclass.dir = dir
      end
    end
    
              # Built-in events
          if node['id'] == 'Events-catalog'
            node.next_element.css('li').each do |li|
              name = '#{li.at_css('b').content.delete(''').strip} event'
              id = name.parameterize
              li['id'] = id
              entries << [name, id, type] unless name == entries.last[0]
            end
            next
          end
    
              id = link['href'].remove('#')
          entries << [name, id]
          next if name =~ /Sass|Less|Glyphicons/
    
            # Helper method to get access to the class variable. This is mostly
        # exposed for tests. This shouldn't be mucked with directly, since it's
        # structure may change at any time.
        def registered; @@registered; end
      end
    end
  end
end

    
          # Renders a template, handling the template as a string, but otherwise
      # acting the same way as {#render}.
      #
      # @return [String]
      def render_string
        Erubis::Eruby.new(template, trim: true).result(binding)
      end
    
        def assets_path
      @assets_path ||= File.join gem_path, 'assets'
    end
    
    
    {    # @include transition(#{border-color ease-in-out .15s, box-shadow ease-in-out .15s})
    # to
    # @include transition(border-color ease-in-out .15s, box-shadow ease-in-out .15s)
    def deinterpolate_vararg_mixins(scss)
      scss = scss.dup
      VARARG_MIXINS.each do |mixin|
        if scss.gsub! /(@include\s*#{Regexp.quote(mixin)})\(\s*\#\{([^}]+)\}\s*\)/, '\1(\2)'
          log_transform mixin
        end
      end
      scss
    end
    
        def silence_log
      @silence = true
      yield
    ensure
      @silence = false
    end
  end
end

    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
    desc 'Start a dummy (test) Rails app server'
task :dummy_rails do
  require 'rack'
  require 'term/ansicolor'
  port = ENV['PORT'] || 9292
  puts %Q(Starting on #{Term::ANSIColor.cyan 'http://localhost:#{port}'})
  Rack::Server.start(
    config: 'test/dummy_rails/config.ru',
    Port: port)
end
    
    ###
### methods
###
    
              @node = node
          @variable = variable
          @referenced = false
          @references = []
        end
    
            def nested_comparison?(node)
          if node.or_type?
            node.node_parts.all? { |node_part| comparison? node_part }
          else
            false
          end
        end
    
              add_offense(node)
        end
    
      def generate_error_hash(error)
    {
      :path => request.path,
      :status => error.status_code,
      :error => error.to_hash
    }
  end
    
              def plugins
            @plugins ||= find_plugins_gem_specs.map do |spec|
              { :name => spec.name, :version => spec.version.to_s }
            end.sort_by do |spec|
              spec[:name]
            end
          end