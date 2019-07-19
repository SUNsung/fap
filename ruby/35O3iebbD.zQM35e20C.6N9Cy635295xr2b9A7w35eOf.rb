
        
                selector = 'div.highlighter-coderay>div.CodeRay>div.code>pre'
        refute result.css(selector).empty?, 'pre tag should exist'
      end
    end
    
          Jekyll.logger.info 'Total allocated: #{total_allocated_output} (#{report.total_allocated} objects)'.cyan
      Jekyll.logger.info 'Total retained:  #{total_retained_output} (#{report.total_retained} objects)'.cyan
    
    #############################################################################
#
# Standard tasks
#
#############################################################################
    
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
    
        def upload_watch_icon(app_version, upload_file, content_provider_id, sso_token_for_image)
      upload_file(app_version: app_version, upload_file: upload_file, path: '/upload/image', content_provider_id: content_provider_id, sso_token: sso_token_for_image, du_validation_rule_set: 'MZPFT.GizmoAppIcon')
    end
    
        def itc_stub_app_submissions_invalid
      # Start app submission
      stub_request(:get, 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/apps/898536088/versions/812106519/submit/summary').
        to_return(status: 200, body: itc_read_fixture_file('app_submission/start_failed.json'), headers: { 'Content-Type' => 'application/json' })
    end
    
        it 'raises an exception when the version is commented-out in podspec' do
      test_content = '# s.version = '1.3.2''
      expect do
        Fastlane::Helper::PodspecHelper.new.parse(test_content)
      end.to raise_error('Could not find version in podspec content '#{test_content}'')
    end
    
    describe DefaultScenarioImporter do
  let(:user) { users(:bob) }
  describe '.import' do
    it 'imports a set of agents to get the user going when they are first created' do
      mock(DefaultScenarioImporter).seed(is_a(User))
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      DefaultScenarioImporter.import(user)
    end
    
        it 'optionally supports treating values that start with '$' as raw JSONPath' do
      expect(Utils.interpolate_jsonpaths('$.there.world', payload)).to eq('$.there.world')
      expect(Utils.interpolate_jsonpaths('$.there.world', payload, :leading_dollarsign_is_jsonpath => true)).to eq('WORLD')
    end
  end
    
      describe '#that checker should be valid' do
    it 'should check that the aftership object is valid' do
      expect(@checker).to be_valid
    end
    
      def sign_in_params
    devise_parameter_sanitizer.sanitize(:sign_in)
  end
    
    require 'uri'
    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
    # Configure VAGRANT_CWD so that the tests never find an actual
# Vagrantfile anywhere, or at least this minimizes those chances.
ENV['VAGRANT_CWD'] = VAGRANT_TEST_CWD
    
          # Setup the default private key
      @default_private_key_path = @home_path.join('insecure_private_key')
      copy_insecure_private_key
    
            widths = {}
        widths[:id] = 8
        widths[:name] = 6
        widths[:provider] = 6
        widths[:state] = 6
        widths[:vagrantfile_path] = 35
    
        it 'should include the machine id' do
      expect($stdout).to receive(:puts).with(/,machine-id,/).twice
    end
    
      config.vm.define 'arch' do |arch|
    arch.vm.box = 'jfredett/arch-puppet'
  end
    
    # enable logging
FPM::Util.send :module_function, :logger
FPM::Util.logger.level = :info
FPM::Util.logger.subscribe STDERR
    
        npm_flags = []
    settings.each do |key, value|
      # npm lets you specify settings in a .npmrc but the same key=value settings
      # are valid as '--key value' command arguments to npm. Woo!
      logger.debug('Configuring npm', key => value)
      npm_flags += [ '--#{key}', value ]
    end
    
      option '--identifier-prefix', 'IDENTIFIER_PREFIX',
    'Reverse domain prefix prepended to package identifier, ' \
    'ie. 'org.great.my'. If this is omitted, the identifer ' \
    'will be the package name.'
  option '--payload-free', :flag, 'Define no payload, assumes use of script options.',
    :default => false
  option '--ownership', 'OWNERSHIP',
    '--ownership option passed to pkgbuild. Defaults to 'recommended'. ' \
    'See pkgbuild(1).', :default => 'recommended' do |value|
    if !OWNERSHIP_OPTIONS.include?(value)
      raise ArgumentError, 'osxpkg-ownership value of '#{value}' is invalid. ' \
        'Must be one of #{OWNERSHIP_OPTIONS.join(', ')}'
    end
    value
  end
    
        # do channel-discover if required
    if !attributes[:pear_channel].nil?
      logger.info('Custom channel specified', :channel => attributes[:pear_channel])
      channel_list = safesystemout('pear', '-c', config, 'list-channels')
      if channel_list !~ /#{Regexp.quote(attributes[:pear_channel])}/
        logger.info('Discovering new channel', :channel => attributes[:pear_channel])
        safesystem('pear', '-c', config, 'channel-discover', attributes[:pear_channel])
      end
      input_package = '#{attributes[:pear_channel]}/#{input_package}'
      logger.info('Prefixing package name with channel', :package => input_package)
    end
    
      option '--name', 'SERVICE_NAME', 'The name of the service you are creating'
  option '--chdir', 'CHDIR', 'The working directory used by the service'
    
      option '--install-bin', 'BIN_PATH', 'The path to where python scripts ' \
    'should be installed to.'
  option '--install-lib', 'LIB_PATH', 'The path to where python libs ' \
    'should be installed to (default depends on your python installation). ' \
    'Want to find out what your target platform is using? Run this: ' \
    'python -c 'from distutils.sysconfig import get_python_lib; ' \
    'print get_python_lib()''
  option '--install-data', 'DATA_PATH', 'The path to where data should be ' \
    'installed to. This is equivalent to 'python setup.py --install-data ' \
    'DATA_PATH'
  option '--dependencies', :flag, 'Include requirements defined in setup.py' \
    ' as dependencies.', :default => true
  option '--obey-requirements-txt', :flag, 'Use a requirements.txt file ' \
    'in the top-level directory of the python package for dependency ' \
    'detection.', :default => false
  option '--scripts-executable', 'PYTHON_EXECUTABLE', 'Set custom python ' \
    'interpreter in installing scripts. By default distutils will replace ' \
    'python interpreter in installing scripts (specified by shebang) with ' \
    'current python interpreter (sys.executable). This option is equivalent ' \
    'to appending 'build_scripts --executable PYTHON_EXECUTABLE' arguments ' \
    'to 'setup.py install' command.'
  option '--disable-dependency', 'python_package_name',
    'The python package name to remove from dependency list',
    :multivalued => true, :attribute_name => :python_disable_dependency,
    :default => []
  option '--setup-py-arguments', 'setup_py_argument',
    'Arbitrary argument(s) to be passed to setup.py',
    :multivalued => true, :attribute_name => :python_setup_py_arguments,
    :default => []
    
      # Returns the path to the tar file containing the packed up staging directory
  def payload
    payload_tar = build_path('payload.tar')
    logger.info('Creating payload tar ', :path => payload_tar)
    
        def _send_target(e)
      _send_keys(tmux_window_and_pane_target, e)
    end
    
      describe '#global_project' do
    let(:directory) { described_class.directory }
    let(:base) { '#{directory}/sample.yml' }
    let(:first_dup) { '#{home_config_dir}/dup/local-dup.yml' }
    let(:yaml) { '#{directory}/yaml.yaml' }
    
          it 'returns false' do
        expect(described_class.editor?).to be_falsey
      end
    end
  end