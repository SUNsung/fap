
        
              path_to_use = FastlaneCore::FastlaneFolder.path || Dir.pwd
      parameters ||= {}
      begin
        Dir.chdir(path_to_use) do # the file is located in the fastlane folder
          execute_flow_block(before_all_blocks, current_platform, current_lane, parameters)
          execute_flow_block(before_each_blocks, current_platform, current_lane, parameters)
    
        def initialize(analytics_ingester_client: AnalyticsIngesterClient.new(GA_TRACKING))
      require 'securerandom'
      @session_id = SecureRandom.uuid
      @client = analytics_ingester_client
      @threads = []
      @launch_event_sent = false
    end
    
            cmd = ['git tag']
    
          it 'adds verbose param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            verbose: '1'
          )
        end').runner.execute(:test)
    
            inner_command = 'git describe --tags `git rev-list --tags --max-count=1`'
        pseudocommand = 'git log --pretty=\'%B\' #{inner_command.shellescape}...HEAD'
        expect(result).to eq(pseudocommand)
      end
    
          context 'with valid path to compile_commands.json' do
        context 'with no path to oclint' do
          let(:result) do
            Fastlane::FastFile.new.parse('lane :test do
              oclint( compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json' )
            end').runner.execute(:test)
          end
          let(:command) { 'cd #{File.expand_path('.').shellescape} && oclint -report-type=html -o=oclint_report.html' }
    
          context 'when specify quiet option' do
        it 'adds quiet option' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              quiet: true
            )
          end').runner.execute(:test)
    
        context 'external commands are failed' do
      context 'with error_callback' do
        it 'doesn't raise shell_error' do
          allow(FastlaneCore::UI).to receive(:error)
          called = false
          expect_command('exit 1', exitstatus: 1)
          Fastlane::Actions.sh('exit 1', error_callback: ->(_) { called = true })
    
            expect(Open3).to receive(:capture3).with(cmd).and_return('')
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
    
    # confirms that the escaped string that is generated actually
# gets turned back into the source string by the actual shell.
# abuses a `grep` (or `find`) error message because that should be cross platform
def confirm_shell_unescapes_string_correctly(string, escaped)
  compare_string = string.to_s.dup
    
    module Cert
  class CommandsGenerator
    include Commander::Methods
    
        # advance scanner to pos after the next match of pattern and return the match
    def scan_next(pattern)
      return unless @s.scan_until(pattern)
      @s.matched
    end
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false