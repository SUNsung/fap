
        
          # Helper for use after calling send_*_instructions methods on a resource.
  # If we are in paranoid mode, we always act as if the resource was valid
  # and instructions were sent.
  def successfully_sent?(resource)
    notice = if Devise.paranoid
      resource.errors.clear
      :send_paranoid_instructions
    elsif resource.errors.empty?
      :send_instructions
    end
    
    class ApplicationController < ActionController::Base
end
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
      def skip_or_later_bottles?
    homebrew_developer? && !ENV['HOMEBREW_SKIP_OR_LATER_BOTTLES'].nil?
  end
    
        it 'depends_on with an instance as argument' do
      expect_offense(<<~RUBY)
        class Foo < Formula
          desc 'foo'
          url 'https://brew.sh/foo-1.0.tgz'
          depends_on FOO::BAR.new
                     ^^^^^^^^^^^^ `depends_on` can take requirement classes instead of instances
        end
      RUBY
    end
    
        return false if args[:after] && OS::Mac.version < args[:after]
    
          @locator.sdk_if_applicable(v)
    end
    
            # Ask Spotlight where Xcode is. If the user didn't install the
        # helper tools and installed Xcode in a non-conventional place, this
        # is our only option. See: https://superuser.com/questions/390757
        MacOS.app_with_bundle_id(BUNDLE_ID, OLD_BUNDLE_ID)
      end
    
            odebug 'Installing artifact of class #{artifact.class}'
    
        def metadata_subdir(leaf, version: self.version, timestamp: :latest, create: false)
      raise CaskError, 'Cannot create metadata subdir when timestamp is :latest.' if create && timestamp == :latest
    
      #
  # Kills off the connection threads if there are any hanging around.
  #
  def cleanup_handler
    # Kill any remaining handle_connection threads that might
    # be hanging around
    conn_threads.each { |thr|
      thr.kill
    }
  end
    
        if session.sys.process.each_process.find { |i| i['pid'] == pid} ['arch'] == 'x86'
      addr = [mem].pack('V')
      len = [data.length].pack('V')
      ret = rg.crypt32.CryptUnprotectData('#{len}#{addr}', 16, nil, nil, nil, 0, 8)
      len, addr = ret['pDataOut'].unpack('V2')
    else
      addr = [mem].pack('Q')
      len = [data.length].pack('Q')
      ret = rg.crypt32.CryptUnprotectData('#{len}#{addr}', 16, nil, nil, nil, 0, 16)
      len, addr = ret['pDataOut'].unpack('Q2')
    end
    
        raw = create_payload_from_file rexe
    
      def log_error(exception, ui_message)
    elog '#{ui_message}: #{exception.message}'
    exception.backtrace.each { |line| elog '#{line}' }
    # TODO: We should try to surface the original exception, instead of just a generic one.
    # This should not display the full backtrace, only the message.
    raise exception
  end
    
        def any?(key)
      value = fetch(key)
      if value && value.respond_to?(:any?)
        begin
          return value.any?
        rescue ArgumentError # rubocop:disable Lint/HandleExceptions
          # Gracefully ignore values whose `any?` method doesn't accept 0 args
        end
      end
    
          # rubocop:disable Style/GuardClause
      def register_legacy_scm_hooks
        if Rake::Task.task_defined?('deploy:new_release_path')
          after 'deploy:new_release_path', '#{scm_name}:create_release'
        end
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
      table td.code       {width:750px}
  table td.code div   {width:750px;overflow:hidden}
</style>
</head>
<body>
  <div id='wrap'>
    <div id='header'>
      <img src='<%= env['SCRIPT_NAME'] %>/__sinatra__/500.png' alt='application error' height='161' width='313' />
      <div id='summary'>
        <h1><strong><%=h exception.class %></strong> at <strong><%=h path %>
          </strong></h1>
        <h2><%=h exception.message %></h2>
        <ul>
          <li class='first'><strong>file:</strong> <code>
            <%=h frames.first.filename.split('/').last %></code></li>
          <li><strong>location:</strong> <code><%=h frames.first.function %>
            </code></li>
          <li class='last'><strong>line:
            </strong> <%=h frames.first.lineno %></li>
        </ul>
      </div>
      <div class='clear'></div>
    </div>
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny
    
          def call(env)
        request  = Request.new(env)
        get_was  = handle(request.GET)
        post_was = handle(request.POST) rescue nil
        app.call env
      ensure
        request.GET.replace  get_was  if get_was
        request.POST.replace post_was if post_was
      end
    
          alias react deny
    
        context 'within a method call node' do
      let(:src) { 'obj.method(arg1, arg2, arg3)' }
    
    RSpec.describe RuboCop::AST::ModuleNode do
  let(:module_node) { parse_source(source).ast }
    
            def correct(processed_source, node)
          return if %i[kwarg kwoptarg].include?(node.type)
    
            # Returns true if running with --auto-correct would remove the braces
        # of the last argument.
        def braces_will_be_removed?(args)
          brace_config = config.for_cop('Style/BracesAroundHashParameters')
          return false unless brace_config.fetch('Enabled')
          return false if brace_config['AutoCorrect'] == false
    
        %w[lambda proc ->].each do |proc_type|
      it 'doesn't register an offense if a #{proc_type} is passed' do
        expect_no_offenses(<<~RUBY)
          #{keyword} A
            #{modifier}
            define_method(:method1, #{proc_type} { })
          end
        RUBY
      end
    end
  end
    
      def add_path(tar, tar_path, path)
    stat = File.lstat(path)
    if stat.directory?
      tar.mkdir(tar_path, stat.mode)
    elsif stat.symlink?
      tar.add_symlink(tar_path, File.readlink(path), stat.mode)
    else
      tar.add_file_simple(tar_path, stat.mode, stat.size) do |io|
        File.open(path) do |fd|
          chunk = nil
          size = 0
          while chunk = fd.read(16384) do
            size += io.write(chunk)
          end
          if size != stat.size
            raise 'Failed to add #{path} to the archive; expected to ' +
                  'write #{stat.size} bytes, only wrote #{size}'
          end
        end
      end # tar.tar.add_file_simple
    end
  end # def add_path
    
        # Copy 'files' from builddir to :output/files
    Find.find('files', 'manifests') do |path|
      logger.info('Copying path: #{path}')
      if File.directory?(path)
        ::Dir.mkdir(File.join(params[:output], path))
      else
        FileUtils.cp(path, File.join(params[:output], path))
      end
    end
  end # def build!