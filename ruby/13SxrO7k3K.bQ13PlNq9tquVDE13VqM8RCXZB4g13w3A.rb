
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    #
    
        Category.transaction do
      lounge.group_names = ['trust_level_3']
      unless lounge.save
        puts lounge.errors.full_messages
        raise 'Failed to set permissions on trust level 3 lounge category!'
      end
    
      before_action :set_account
    
        def resource_params
      params.require(:user).permit(
        :unconfirmed_email
      )
    end
  end
end

    
        private
    
      def local_domain?
    TagManager.instance.web_domain?(hub_topic_domain)
  end
    
      def future_expires
    Time.now.utc + lease_seconds_or_default
  end
    
    desc 'Test all Gemfiles from test/*.gemfile'
task :test_all_gemfiles do
  require 'term/ansicolor'
  require 'pty'
  require 'shellwords'
  cmd      = 'bundle install --quiet && bundle exec rake --trace'
  statuses = Dir.glob('./test/gemfiles/*{[!.lock]}').map do |gemfile|
    env = {'BUNDLE_GEMFILE' => gemfile}
    cmd_with_env = '  (#{env.map { |k, v| 'export #{k}=#{Shellwords.escape v}' } * ' '}; #{cmd})'
    $stderr.puts Term::ANSIColor.cyan('Testing\n#{cmd_with_env}')
    PTY.spawn(env, cmd) do |r, _w, pid|
      begin
        r.each_line { |l| puts l }
      rescue Errno::EIO
        # Errno:EIO error means that the process has finished giving output.
      ensure
        ::Process.wait pid
      end
    end
    [$? && $?.exitstatus == 0, cmd_with_env]
  end
  failed_cmds = statuses.reject(&:first).map { |(_status, cmd_with_env)| cmd_with_env }
  if failed_cmds.empty?
    $stderr.puts Term::ANSIColor.green('Tests pass with all gemfiles')
  else
    $stderr.puts Term::ANSIColor.red('Failing (#{failed_cmds.size} / #{statuses.size})\n#{failed_cmds * '\n'}')
    exit 1
  end
end
    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
      # Enable serving of images, stylesheets, and JavaScripts from an asset server.
  # config.action_controller.asset_host = 'http://assets.example.com'
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false
    
          attr_reader :name, :path
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
        def emoji(name)
      if emoji = Gemojione.index.find_by_name(name)
        IO.read(EMOJI_PATHNAME.join('#{emoji['unicode']}.png'))
      else
        fail ArgumentError, 'emoji `#{name}' not found'
      end
    end