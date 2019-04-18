
        
        Then(/^the current directory will be a symlink to the release$/) do
  run_vagrant_command(exists?('e', TestApp.current_path))
end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
        def installer
      @installer ||= PluginInstaller.new
    end
    
          def load_built_in_scm
        require 'capistrano/scm/#{scm_name}'
        scm_class = Object.const_get(built_in_scm_plugin_class_name)
        # We use :load_immediately because we are initializing the SCM plugin
        # late in the load process and therefore can't use the standard
        # load:defaults technique.
        install_plugin(scm_class, load_immediately: true)
      end
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad
    
    @@ login
<form action='/'>
  <label for='user'>User Name:</label>
  <input name='user' value='' />
  <input type='submit' value='GO!' />
</form>
    
          def safe?(env)
        %w[GET HEAD OPTIONS TRACE].include? env['REQUEST_METHOD']
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS
    # Supported browsers:: all
    # More infos::         http://en.wikipedia.org/wiki/Cross-site_scripting
    #
    # Automatically escapes Rack::Request#params so they can be embedded in HTML
    # or JavaScript without any further issues. Calls +html_safe+ on the escaped
    # strings if defined, to avoid double-escaping in Rails.
    #
    # Options:
    # escape:: What escaping modes to use, should be Symbol or Array of Symbols.
    #          Available: :html (default), :javascript, :url
    class EscapedParams < Base
      extend Rack::Utils
    
          def call(env)
        request               = Request.new(env)
        status, headers, body = app.call(env)
    
      it 'should allow changing report only' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :report_uri => '/my_amazing_csp_report_parser', :report_only => true
      run DummyApp
    end
    
    require 'bundler/cli'
require 'bundler/friendly_errors'
    
        puts('No plugin updated') if update_count.zero?
  end
    
      it 'records when the config was read' do
    expect(subject.read_at).to be <= Time.now
  end
    
        context 'update all the plugins' do
      it 'has executed successfully' do
        logstash.run_command_in_path('bin/logstash-plugin update --no-verify')
        expect(logstash).to have_installed?(plugin_name, '0.1.1')
      end
    end
  end
end

    
    require 'fpm'
require 'tmpdir'
require 'fpm/package/pleaserun'
    
      def output_check(output_path)
    if !File.directory?(File.dirname(output_path))
      raise ParentDirectoryMissing.new(output_path)
    end
    if File.file?(output_path)
      if attributes[:force?]
        logger.warn('Force flag given. Overwriting package at #{output_path}')
        File.delete(output_path)
      else
        raise FileAlreadyExists.new(output_path)
      end
    end
  end # def output_path
    
        # Create the .txz package archive from the files in staging_path.
    File.open(output_path, 'wb') do |file|
      XZ::StreamWriter.new(file) do |xz|
        FPM::Util::TarWriter.new(xz) do |tar|
          # The manifests must come first for pkg.
          add_path(tar, '+COMPACT_MANIFEST',
                   File.join(staging_path, '+COMPACT_MANIFEST'))
          add_path(tar, '+MANIFEST',
                   File.join(staging_path, '+MANIFEST'))
    
        # do channel-update if requested
    if attributes[:pear_channel_update?]
      channel = attributes[:pear_channel] || 'pear'
      logger.info('Updating the channel', :channel => channel)
      safesystem('pear', '-c', config, 'channel-update', channel)
    end
    
        if File.exists?(params[:output])
      # TODO(sissel): Allow folks to choose output?
      logger.error('Puppet module directory '#{params[:output]}' already ' \
                    'exists. Delete it or choose another output (-p flag)')
    end
    
        logger.info('Trying to download', :package => package)
    
        safesystem('tar', *args)
    
          case
      when value.is_a?(String), value.is_a?(Symbol)
        %W(--#{opt} #{value})
      when value.is_a?(Array)
        value.map { |v| %W(--#{opt} #{v}) }
      when value.is_a?(TrueClass)
        '--#{opt}'
      when value.is_a?(FalseClass)
        '--no-#{opt}'
      else
        fail TypeError, 'Unexpected type: #{value.class}'
      end
    end
  end