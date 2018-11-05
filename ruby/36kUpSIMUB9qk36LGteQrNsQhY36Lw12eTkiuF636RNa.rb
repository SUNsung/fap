
        
                  def value
            if @allow_method_names_outside_object
              object.public_send @method_name if object && object.respond_to?(@method_name)
            else
              object.public_send @method_name if object
            end
          end
    
              def hidden_field_for_checkbox(options)
            @unchecked_value ? tag('input', options.slice('name', 'disabled', 'form').merge!('type' => 'hidden', 'value' => @unchecked_value)) : ''.html_safe
          end
      end
    end
  end
end

    
    module ActionView #:nodoc:
  # = Action View PathSet
  #
  # This class is used to store and access paths in Action View. A number of
  # operations are defined so that you can search among the paths in this
  # set and also perform operations on other +PathSet+ objects.
  #
  # A +LookupContext+ will use a +PathSet+ to store the paths in its context.
  class PathSet #:nodoc:
    include Enumerable
    
    module ActionView
  # = Action View Railtie
  class Railtie < Rails::Engine # :nodoc:
    config.action_view = ActiveSupport::OrderedOptions.new
    config.action_view.embed_authenticity_token_in_remote_forms = nil
    config.action_view.debug_missing_translation = true
    config.action_view.default_enforce_utf8 = nil
    config.action_view.finalize_compiled_template_methods = true
    
        private
    
      # True if a {Formula} is being built universally.
  # e.g. on newer Intel Macs this means a combined x86_64/x86 binary/library.
  # <pre>args << '--universal-binary' if build.universal?</pre>
  def universal?
    include?('universal') && option_defined?('universal')
  end
    
        # Get rid of any info 'dir' files, so they don't conflict at the link stage
    info_dir_file = @f.info + 'dir'
    if info_dir_file.file? && !@f.skip_clean?(info_dir_file)
      observe_file_removal info_dir_file
    end
    
      def doctor
    doctor_args.parse
    
      def convert_man_page(markup, target)
    manual = target.basename('.1')
    organisation = 'Homebrew'
    
          def run
        odisabled '`brew cask --version`', '`brew --version`'
      end
    
      def root_url(var = nil, specs = {})
    if var.nil?
      @root_url ||= '#{HOMEBREW_BOTTLE_DOMAIN}/#{Utils::Bottles::Bintray.repository(tap)}'
    else
      @root_url = var
      @root_url_specs.merge!(specs)
    end
  end
    
          def find_matching_tag(tag)
        generic_find_matching_tag(tag) ||
          find_altivec_tag(tag) ||
          find_older_compatible_tag(tag)
      end
    
                problem 'Use '--with#{Regexp.last_match(1)}-test' instead of '--#{option}'.'\
                    ' Migrate '--#{option}' with `deprecated_option`.'
          end
        end
      end
    end
    
          private
    
          # Almost any real Unix terminal will support color,
      # so we just filter for Windows terms (which don't set TERM)
      # and not-real terminals, which aren't ttys.
      return str if ENV['TERM'].nil? || ENV['TERM'].empty? || !STDOUT.tty?
      '\e[#{COLORS[color]}m#{str}\e[0m'
    end
    
          output = input_path if @options[:in_place]
      write_output(out, output)
    rescue Sass::SyntaxError => e
      raise e if @options[:trace]
      file = ' of #{e.sass_filename}' if e.sass_filename
      raise 'Error on line #{e.sass_line}#{file}: #{e.message}\n  Use --trace for backtrace'
    rescue LoadError => err
      handle_load_error(err)
    end
    
          # return path set in app.rb not @page.path
      def path
        @path
      end
    
          def string_to_code(string)
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
          def footer_content
        has_footer && @footer.formatted_data
      end
    
        get page1
    assert_match /Last edited by <b>user1/, last_response.body
    
    def version
  line = File.read('lib/#{name}.rb')[/^\s*VERSION\s*=\s*.*/]
  line.match(/.*VERSION\s*=\s*[''](.*)['']/)[1]
end
    
        # Ensure path begins with a single leading slash
    def clean_path(path)
      if path
        (path[0] != '/' ? path.insert(0, '/') : path).gsub(/\/{2,}/, '/')
      end
    end
    
    module Gollum
  VERSION = '4.1.4'
    
    get '/' do
  stats = Sidekiq::Stats.new
  @failed = stats.failed
  @processed = stats.processed
  @messages = $redis.lrange('sinkiq-example-messages', 0, -1)
  erb :index
end
    
        def self.inherited(child)
      child.app_url = self.app_url
      child.session_secret = self.session_secret
      child.redis_pool = self.redis_pool
      child.sessions = self.sessions
    end