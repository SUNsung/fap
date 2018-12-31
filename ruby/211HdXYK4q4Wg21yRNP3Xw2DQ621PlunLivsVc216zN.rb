
        
            keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
      def external_commands
    paths.reduce([]) do |cmds, path|
      Dir['#{path}/brew-*'].each do |file|
        next unless File.executable?(file)
        cmd = File.basename(file, '.rb')[5..-1]
        cmds << cmd unless cmd.include?('.')
      end
      cmds
    end.sort
  end
    
    module Homebrew
  def config
    dump_verbose_config
  end
    
        if ARGV.named.empty?
      slow_checks = %w[
        check_for_broken_symlinks
        check_missing_deps
        check_for_outdated_homebrew
        check_for_linked_keg_only_brews
      ]
      methods = (checks.all.sort - slow_checks) + slow_checks
    else
      methods = ARGV.named
    end
    
          begin
        result = Formulary.factory(query).name
      rescue FormulaUnavailableError
        result = search_tap(user, repo, name)
      end
    
            expect(result).to match(%r{cd .* && oclint -report-type=html -o=oclint_report.html -p ./fastlane/spec/fixtures/oclint \'.*})
      end
    
            def execute
          create_labels
        end
    
          # Returns true if the given object has already been imported, false
      # otherwise.
      #
      # object - The object to check.
      def already_imported?(object)
        id = id_for_already_imported_cache(object)
    
            # Returns a Hash that can be used to populate `notes.st_diff`, removing
        # the need for requesting Git data for every diff note.
        def diff_hash
          {
            diff: diff_hunk,
            new_path: file_path,
            old_path: file_path,
    }
    
              hash[:author] &&= Representation::User.from_json_hash(hash[:author])
    
            a_split.each_with_index { |s, i| a_split[i] = s.to_i unless i == a_length - 1 }
        b_split.each_with_index { |s, i| b_split[i] = s.to_i unless i == b_length - 1 }
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
        def effective_path
      @effective_path ||= effective_url.path
    end
  end
end

    
        self.params = {}
    self.headers = { 'User-Agent' => 'DevDocs' }
    self.force_gzip = false
    
        @statuses = @account.statuses.permitted_for(@account, signed_request_account)
    @statuses = params[:min_id].present? ? @statuses.paginate_by_min_id(LIMIT, params[:min_id]).reverse : @statuses.paginate_by_max_id(LIMIT, params[:max_id])
    @statuses = cache_collection(@statuses, Status)
  end
    
        def show
      authorize @user, :change_email?
    end
    
      def hub_callback
    params['hub.callback']
  end
    
      caveats <<~EOS
    Installation or Uninstallation may fail with Exit Code 19 (Conflicting Processes running) if Browsers, Safari Notification Service or SIMBL Services (e.g. Flashlight) are running or Adobe Creative Cloud or any other Adobe Products are already installed. See Logs in /Library/Logs/Adobe/Installers if Installation or Uninstallation fails, to identifify the conflicting processes.
  EOS
end

    
    # The module that contains everything Sass-related:
#
# * {Sass::Engine} is the class used to render Sass/SCSS within Ruby code.
# * {Sass::Plugin} is interfaces with web frameworks (Rails and Merb in particular).
# * {Sass::SyntaxError} is raised when Sass encounters an error.
# * {Sass::CSS} handles conversion of CSS to Sass.
#
# Also see the {file:SASS_REFERENCE.md full Sass reference}.
module Sass
  class << self
    # @private
    attr_accessor :tests_running
  end
    
          root.children.each {|v| nest_seqs(v)}
    end
    
          opts.on('--unix-newlines', 'Use Unix-style newlines in written files.',
                                 ('Always true on Unix.' unless Sass::Util.windows?)) do
        @options[:unix_newlines] = true if Sass::Util.windows?
      end
    end
    
          # If the importer is based on files on the local filesystem
      # this method should return folders which should be watched
      # for changes.
      #
      # @return [Array<String>] List of absolute paths of directories to watch
      def directories_to_watch
        []
      end
    
            def destroy
          if @property
            authorize! :destroy, @property
            @property.destroy
            respond_with(@property, status: 204)
          else
            invalid_resource!(@property)
          end
        end
    
            def show
          @state = scope.find(params[:id])
          respond_with(@state)
        end
    
            def update
          @stock_item = StockItem.accessible_by(current_ability, :update).find(params[:id])