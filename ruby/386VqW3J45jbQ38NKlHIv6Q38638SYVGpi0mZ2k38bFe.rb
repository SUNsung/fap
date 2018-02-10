
        
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
    
        checks.inject_dump_stats! if ARGV.switch? 'D'
    
      UNBREWED_EXCLUDE_FILES = %w[.DS_Store]
  UNBREWED_EXCLUDE_PATHS = %w[
    .github/*
    bin/brew
    lib/gdk-pixbuf-2.0/*
    lib/gio/*
    lib/node_modules/*
    lib/python[23].[0-9]/*
    lib/pypy/*
    lib/pypy3/*
    lib/ruby/gems/[12].*
    lib/ruby/site_ruby/[12].*
    lib/ruby/vendor_ruby/[12].*
    share/pypy/*
    share/pypy3/*
    share/doc/homebrew/*
    share/info/dir
    share/man/man1/brew.1
    share/man/whatis
  ]
    
            if msg = blacklisted?(query)
          if count > 0
            puts
            puts 'If you meant #{query.inspect} precisely:'
            puts
          end
          puts msg
        elsif count == 0
          puts 'No formula found for #{query.inspect}.'
          begin
            GitHub.print_pull_requests_matching(query)
          rescue GitHub::Error => e
            SEARCH_ERROR_QUEUE << e
          end
        end
      end
    end
    
      def installed?(formula)
    (HOMEBREW_CELLAR/formula.split('/').last).directory?
  end
end

    
      def self.path(name)
    Formulary.core_path(name)
  end
    
          def initialize(gradle_path: nil)
        self.gradle_path = gradle_path
      end
    
        def includes_run_script?(string)
      ['Fabric/run', 'Crashlytics/run', 'Fabric.framework/run', 'Crashlytics.framework/run'].any? do |script_path_fragment|
        string.include?(script_path_fragment)
      end
    end
  end
end

    
            it 'returns true' do
          result = Fastlane::FastFile.new.parse('lane :test do
            git_tag_exists(tag: '1.2.0')
          end').runner.execute(:test)
    
        def without_alive_check(&blk)
      @restarting = true
      yield
    ensure
      @restarting = false
    end
  end
end

    
      def tumblr
    Tumblr.configure do |config|
      config.consumer_key = tumblr_consumer_key
      config.consumer_secret = tumblr_consumer_secret
      config.oauth_token = tumblr_oauth_token
      config.oauth_token_secret = tumblr_oauth_token_secret
    end
    
    Tumblr::Client.new
  end
end
    
    html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
          def destroy
        authorization = Api::OpenidConnect::Authorization.find_by(id: params[:id])
        if authorization
          authorization.destroy
        else
          flash[:error] = I18n.t('api.openid_connect.authorizations.destroy.fail', id: params[:id])
        end
        redirect_to api_openid_connect_user_applications_url
      end
    
    
end

    
    
    
        # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 143 and pkt.tcp_dport != 143)
    s = find_session((pkt.tcp_sport == 143) ? get_session_src(pkt) : get_session_dst(pkt))
    s[:sname] ||= 'imap4'
    
      # Implemented by subclasses to define Rake tasks. Typically a plugin will call
  # `eval_rakefile` to load Rake tasks from a separate .rake file.
  #
  # Example:
  #
  #   def define_tasks
  #     eval_rakefile File.expand_path('../tasks.rake', __FILE__)
  #   end
  #
  # For simple tasks, you can define them inline. No need for a separate file.
  #
  #   def define_tasks
  #     desc 'Do something fantastic.'
  #     task 'my_plugin:fantastic' do
  #       ...
  #     end
  #   end
  #
  def define_tasks; end
    
        describe 'when defining a host using a combination of the `server` and `role` syntax' do
      before do
        dsl.server 'db@example1.com:1234', roles: %w{db}, active: true
        dsl.server 'root@example1.com:1234', roles: %w{web}, active: true
        dsl.server 'example1.com:5678', roles: %w{web}, active: true
        dsl.role :app, %w{deployer@example1.com:1234}
        dsl.role :app, %w{example1.com:5678}
      end
    
    <script>
  // reading
  var es = new EventSource('/stream');
  es.onmessage = function(e) { $('#chat').append(e.data + '\n') };
    
          def session?(env)
        env.include? options[:session_key]
      end
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
      it 'should set the X-Content-Type-Options' do
    expect(get('/', {}, 'wants' => 'text/html').header['X-Content-Type-Options']).to eq('nosniff')
  end
    
        # Returns the scaling and cropping geometries (in string-based ImageMagick format)
    # neccessary to transform this Geometry into the Geometry given. If crop is true,
    # then it is assumed the destination Geometry will be the exact final resolution.
    # In this case, the source Geometry is scaled so that an image containing the
    # destination Geometry would be completely filled by the source image, and any
    # overhanging image would be cropped. Useful for square thumbnail images. The cropping
    # is weighted at the center of the Geometry.
    def transformation_to dst, crop = false
      if crop
        ratio = Geometry.new( dst.width / self.width, dst.height / self.height )
        scale_geometry, scale = scaling(dst, ratio)
        crop_geometry         = cropping(dst, ratio, scale)
      else
        scale_geometry        = dst.to_s
      end
    
        # Returns the id of the instance in a split path form. e.g. returns
    # 000/001/234 for an id of 1234.
    def id_partition attachment, style_name
      case id = attachment.instance.id
      when Integer
        ('%09d'.freeze % id).scan(/\d{3}/).join('/'.freeze)
      when String
        id.scan(/.{3}/).first(3).join('/'.freeze)
      else
        nil
      end
    end
    
            def failure_message
          'Attachment #{@attachment_name} must be between #{@low} and #{@high} bytes'
        end
    
            raise LoadError, 'Could not find the '#{name}' processor in any of these paths: #{directories.join(', ')}' unless required.any?
      end
    end