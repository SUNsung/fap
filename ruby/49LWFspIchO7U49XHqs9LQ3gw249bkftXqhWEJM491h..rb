
        
          </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
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
    
    require 'jekyll'
require 'mercenary'
    
        def execute(command: nil, target_object: nil)
      action_name = command.method_name
      action_class_ref = class_ref_for_action(named: action_name)
      parameter_map = {}
      closure_argument_value = nil
    
          begin
        if xcode_outdated
          # We have to raise that error within this `begin` block to show a nice user error without a stack trace
          FastlaneCore::UI.user_error!('fastlane requires a minimum version of Xcode #{Fastlane::MINIMUM_XCODE_RELEASE}, please upgrade and make sure to use `sudo xcode-select -s /Applications/Xcode.app`')
        end
    
      # https://stackoverflow.com/a/18623297/252627, last variant
  require 'open3'
  Open3.popen3(compare_command) do |stdin, stdout, stderr, thread|
    error = stderr.read.chomp
    # expect(error).to eq(expected_compare_error)
    expect(error).to eq(expected_compare_error) # match(/#{expected_compare_error}/)
  end
end
    
          describe 'running with fastlane' do
        before do
          allow(FastlaneCore::Helper).to receive(:fastlane_enabled?).and_return(true)
          allow(FastlaneCore::FastlaneFolder).to receive(:path).and_return('./fastlane')
    
      def vagrant_cli_command(command)
    puts '[vagrant] #{command}'
    stdout, stderr, status = Dir.chdir(VAGRANT_ROOT) do
      Open3.capture3('#{VAGRANT_BIN} #{command}')
    end
    
        def dry_run?
      fetch(:sshkit_backend) == SSHKit::Backend::Printer
    end
    
          def warn_third_party_scm_must_be_upgraded
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] `set :scm, #{scm_name.inspect}` is deprecated.
To ensure this custom SCM will work with future versions of Capistrano,
please upgrade it to a version that uses the new SCM plugin mechanism
documented here:
    
            private