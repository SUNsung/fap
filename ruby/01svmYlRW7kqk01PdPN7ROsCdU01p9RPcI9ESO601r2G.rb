
        
          # True if a {Formula} is being built with a specific option
  # (which isn't named `with-*` or `without-*`).
  # @deprecated
  def include?(name)
    @args.include?('--#{name}')
  end
    
        def self.cleanup_logs
      return unless HOMEBREW_LOGS.directory?
      HOMEBREW_LOGS.subdirs.each do |dir|
        cleanup_path(dir) { dir.rmtree } if prune?(dir, :days_default => 14)
      end
    end
    
        if ARGV.include?('--pinned') || ARGV.include?('--versions')
      filtered_list
    elsif ARGV.named.empty?
      if ARGV.include? '--full-name'
        full_names = Formula.installed.map(&:full_name).sort do |a, b|
          if a.include?('/') && !b.include?('/')
            1
          elsif !a.include?('/') && b.include?('/')
            -1
          else
            a <=> b
          end
        end
        puts_columns full_names
      else
        ENV['CLICOLOR'] = nil
        exec 'ls', *ARGV.options_only << HOMEBREW_CELLAR
      end
    elsif ARGV.verbose? || !$stdout.tty?
      exec 'find', *ARGV.kegs.map(&:to_s) + %w[-not -type d -print]
    else
      ARGV.kegs.each { |keg| PrettyListing.new keg }
    end
  end
    
        current_revision_var = 'HOMEBREW_UPDATE_AFTER#{repo_var}'
    @current_revision = ENV[current_revision_var].to_s
    raise ReporterRevisionUnsetError, current_revision_var if @current_revision.empty?
  end
    
        def verify_supported_os(name, class_ref)
      if class_ref.respond_to?(:is_supported?)
        # This value is filled in based on the executed platform block. Might be nil when lane is in root of Fastfile
        platform = Actions.lane_context[Actions::SharedValues::PLATFORM_NAME]
        if platform
          unless class_ref.is_supported?(platform)
            UI.important('Action '#{name}' isn't known to support operating system '#{platform}'.')
          end
        end
      end
    end
    
          if @launch_event_sent || launch_context.p_hash.nil?
        return
      end
    
          it 'Collects logs in the specified revision range if specified' do
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits(between: ['abcd', '1234'])
        end').runner.execute(:test)
    
          it 'handles the extension parameter correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.rb')
      end
    
          context 'without parameters' do
        it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add .', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add
          end').runner.execute(:test)
        end
      end
    
            it 'escapes spaces in list of files to process' do
          file = 'path/to/my project/source code/AppDelegate.swift'
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
                files: ['#{file}']
            )
          end').runner.execute(:test)
    
          it 'returns the return value of the block if present' do
        expect_command('ls', '-la')
        return_value = Fastlane::Actions.sh('ls', '-la') do |status, result|
          42
        end
        expect(return_value).to eq(42)
      end
    end
  end
    
          global_option('--verbose') { FastlaneCore::Globals.verbose = true }
    
        def resource_params
      params.require(:report_note).permit(
        :content,
        :report_id
      )
    end
    
        private
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end
    
        weeks
  end
    
      if rss_url.nil?
    puts '#{name}: GETTING'
    rss_check_url = 'http://ajax.googleapis.com/ajax/services/feed/lookup?v=1.0&q=#{web_url}'
    uri = URI.parse(rss_check_url)
    response = JSON.parse(Net::HTTP.get(uri))
    rss_url = response['responseData']['url'] if response['responseData'] && response['responseData'].has_key?('url')