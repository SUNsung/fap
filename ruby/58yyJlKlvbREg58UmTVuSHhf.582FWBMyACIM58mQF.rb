
        
              attr_accessor :description
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=/tmp/cloc.xml')
      end
    
          it 'get SVN build number' do
        result = Fastlane::FastFile.new.parse('lane :test do
            get_build_number_repository
        end').runner.execute(:test)
    
          it 'properly removes new lines of the build number' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(build_number: '24\n', xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
        respond_to do |format|
      if @user_credential.update_attributes(user_credential_params)
        format.html { redirect_to user_credentials_path, notice: 'Your credential was successfully updated.' }
        format.json { head :no_content }
      else
        format.html { render action: 'edit' }
        format.json { render json: @user_credential.errors, status: :unprocessable_entity }
      end
    end
  end
    
      # Enable locale fallbacks for I18n (makes lookups for any locale fall back to
  # the I18n.default_locale when a translation can not be found).
  config.i18n.fallbacks = true
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
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
    
      def user_search
    if params[:admins_controller_user_search]
      search_params = params.require(:admins_controller_user_search)
                            .permit(:username, :email, :guid, :under13)
      @search = UserSearch.new(search_params)
      @users = @search.perform
    end
    
    module Api
  module OpenidConnect
    class TokenEndpointController < ApplicationController
      skip_before_action :verify_authenticity_token
    
          expect('.border-width-false-third').to have_ruleset(ruleset)
      expect('.border-width-false-third').to_not have_rule(bad_rule)
    end
  end
end

    
          expect('.all-buttons-focus').to have_ruleset(ruleset)
    end
  end
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'margin-top: 11px; ' +
                'margin-right: 12px; ' +
                'margin-left: 13px;'
      bad_rule = 'margin-bottom: null;'
    
      context 'called with no prefixes' do
    it 'outputs the spec' do
      rule = 'appearance: none;'
    
          expect('.all-text-inputs-invalid').to have_ruleset(ruleset)
    end
  end
end
