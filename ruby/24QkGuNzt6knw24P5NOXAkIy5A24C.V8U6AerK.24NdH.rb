
        
                def self.find_by_uid(uid, adapter)
          uid = Net::LDAP::Filter.escape(uid)
          adapter.user(adapter.config.uid, uid)
        end
    
            def has_attribute?(attribute)
          if attribute == :location
            get_info(:address).present?
          else
            get_info(attribute).present?
          end
        end
    
            def initialize(project, ref, job = nil)
          @project = project
          @ref = ref
          @job = job
    
            def value_color
          case @status
          when 95..100 then STATUS_COLOR[:good]
          when 90..95 then STATUS_COLOR[:acceptable]
          when 75..90 then STATUS_COLOR[:medium]
          when 0..75 then STATUS_COLOR[:low]
          else
            STATUS_COLOR[:unknown]
          end
        end
      end
    end
  end
end

    
            def value_width
          54
        end
    
        file = File.read(scope('test/sass/templates/#{file || 'complex'}.sass'))
    result = RubyProf.profile { times.times { Sass::Engine.new(file).render } }
    
        # Converts the CSS template into Sass or SCSS code.
    #
    # @param fmt [Symbol] `:sass` or `:scss`, designating the format to return.
    # @return [String] The resulting Sass or SCSS code
    # @raise [Sass::SyntaxError] if there's an error parsing the CSS template
    def render(fmt = :sass)
      check_encoding!
      build_tree.send('to_#{fmt}', @options).strip + '\n'
    rescue Sass::SyntaxError => err
      err.modify_backtrace(:filename => @options[:filename] || '(css)')
      raise err
    end
    
          def self.options
        options = []
        options.concat(super.reject { |option, _| option == '--silent' })
      end
    
      [jekyllPid, compassPid, rackupPid].each { |pid| Process.wait(pid) }
end
    
    module Jekyll
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end