
        
        require 'benchmark/ips'
require 'jekyll'
require 'json'
    
    Benchmark.ips do |x|
  x.report('no body include?') { CONTENT_NOT_CONTAINING.include?('<body') }
  x.report('no body regexp')   { CONTENT_NOT_CONTAINING =~ /<\s*body/ }
  x.compare!
end
    
    lib = File.expand_path('lib', __dir__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'jekyll/version'
    
              External.require_with_graceful_fail 'jekyll-watch'
          watch_method = Jekyll::Watcher.method(:watch)
          if watch_method.parameters.size == 1
            watch_method.call(
              options
            )
          else
            watch_method.call(
              options, site
            )
          end
        end
      end
    end
  end
end

    
            def scaffold_post_content
          ERB.new(File.read(File.expand_path(scaffold_path, site_template))).result
        end
    
            def log_error(error)
          Jekyll.logger.error 'LiveReload experienced an error. ' \
            'Run with --trace for more information.'
          raise error
        end
      end
    end
  end
end

    
              @reload_body = File.read(reload_file)
          @reload_size = @reload_body.bytesize
        end
    
        To install Clojure you should install Leiningen:
      brew install leiningen
    and then follow the tutorial:
      https://github.com/technomancy/leiningen/blob/stable/doc/TUTORIAL.md
    EOS
  when 'osmium' then <<-EOS.undent
    The creator of Osmium requests that it not be packaged and that people
    use the GitHub master branch instead.
    EOS
  when 'gfortran' then <<-EOS.undent
    GNU Fortran is now provided as part of GCC, and can be installed with:
      brew install gcc
    EOS
  when 'play' then <<-EOS.undent
    Play 2.3 replaces the play command with activator:
      brew install typesafe-activator
    
        dirs.each do |d|
      files = []
      d.find { |pn| files << pn unless pn.directory? }
      print_remaining_files files, d
    end
    
            def self.normalize_dn(dn)
          ::Gitlab::Auth::LDAP::DN.new(dn).to_normalized_s
        rescue ::Gitlab::Auth::LDAP::DN::FormatError => e
          Rails.logger.info('Returning original DN \'#{dn}\' due to error during normalization attempt: #{e.message}')
    
            # Get the first part of the email address (before @)
        # In addtion in removes illegal characters
        def generate_username(email)
          email.match(/^[^@]*/)[0].mb_chars.normalize(:kd).gsub(/[^\x00-\x7F]/, '').to_s
        end
    
          def find_oauth_access_token
        token = Doorkeeper::OAuth::Token.from_request(current_request, *Doorkeeper.configuration.access_token_methods)
        return unless token
    
      def to_ary
    @paths.dup.to_ary
  end
  alias to_a to_ary
    
    require 'formula'
require 'fetch'
    
        def initialize(*args)
      @s = StringScanner.new(*args)
    end
    
      # Code is not reloaded between requests.
  config.cache_classes = true
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
    When /^I toggle nsfw posts$/ do
  find('.toggle_nsfw_state', match: :first).click
end
    
        it 'returns likes for a public post without login' do
      post = alice.post(:status_message, text: 'hey', public: true)
      bob.like!(post)
      sign_out :user
      get :index, params: {post_id: post.id}, format: :json
      expect(JSON.parse(response.body).map {|h| h['id'] }).to match_array(post.likes.map(&:id))
    end
    
      gem.required_ruby_version = '>= 2.0'
  gem.add_dependency 'airbrussh', '>= 1.0.0'
  gem.add_dependency 'i18n'
  gem.add_dependency 'rake', '>= 10.0.0'
  gem.add_dependency 'sshkit', '>= 1.9.0'
    
            # rubocop:disable Style/MethodMissing
        def method_missing(key, value=nil)
          if value
            set(lvalue(key), value)
          else
            fetch(key)
          end
        end
        # rubocop:enable Style/MethodMissing
    
          attr_reader :locations, :values, :fetched_keys