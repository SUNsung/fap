
        
          it 'ignores invalid values' do
    location2 = Location.new(
      lat: 2,
      lng: 3,
      radius: -1,
      speed: -1,
      course: -1)
    expect(location2.radius).to be_nil
    expect(location2.speed).to be_nil
    expect(location2.course).to be_nil
  end
    
        def require_local_account!
      redirect_to admin_account_path(@account.id) unless @account.local? && @account.user.present?
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
    
        process_font_assets
    process_stylesheet_assets
    process_javascript_assets
    store_version
  end
    
        def log_http_get_file(url, cached = false)
      s = '  #{'CACHED ' if cached}GET #{url}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
    lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'capistrano/version'
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
            # Skip validation behavior if no validators are registered for this key
        return super unless validators.key?(key)