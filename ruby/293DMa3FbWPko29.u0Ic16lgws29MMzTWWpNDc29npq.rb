
        
            def run(action_named: nil, action_class_ref: nil, parameter_map: nil)
      action_return = runner.execute_action(action_named, action_class_ref, [parameter_map], custom_dir: '.')
      return action_return
    end
    
            message = 'builds/test/#{build_number}#{postfix} (fastlane)'
        tag = 'builds/test/#{build_number}#{postfix}'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
          it 'adds docset_bundle_filename param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_bundle_filename: 'DocSet bundle filename'
          )
        end').runner.execute(:test)
    
            expect(result).to include(' oclint -report-type=pmd -o=report_path.xml ')
        expect(result).to include(' -max-priority-1=10 ')
        expect(result).to include(' -max-priority-2=20 ')
        expect(result).to include(' -max-priority-3=30 ')
        expect(result).to include(' -rc=LONG_LINE=200 -rc=LONG_METHOD=200 ')
        expect(result).to include(' -rule DoubleNegative -rule DeadCode ')
        expect(result).to include(' -disable-rule GotoStatement -disable-rule ShortVariableName ')
        expect(result).to include(' -list-enabled-rules ')
        expect(result).to include(' -enable-clang-static-analyzer ')
        expect(result).to include(' -enable-global-analysis ')
        expect(result).to include(' -allow-duplicated-violations ')
      end
    
          it 'returns the return value of the block if present' do
        expect_command('ls', '-la')
        return_value = Fastlane::Actions.sh('ls', '-la') do |status, result|
          42
        end
        expect(return_value).to eq(42)
      end
    end
  end
    
            it 'returns Array environment variable values correctly' do
          ENV['FOO'] = '5,4,3,2,1'
          config_item = FastlaneCore::ConfigItem.new(key: :foo,
                                                     description: 'foo',
                                                     env_name: 'FOO',
                                                     type: Array)
          config = FastlaneCore::Configuration.create([config_item], {})
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelperXcode8.swift')
  warn('You modified `SnapshotHelperXcode8.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
      # Returns a signed in resource from session (if one exists)
  def signed_in_resource
    warden.authenticate(scope: resource_name)
  end
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
          accessors.each do |accessor|
        mod.class_eval <<-METHOD, __FILE__, __LINE__ + 1
          def #{accessor}
            if defined?(@#{accessor})
              @#{accessor}
            elsif superclass.respond_to?(:#{accessor})
              superclass.#{accessor}
            else
              Devise.#{accessor}
            end
          end
    
          # If the record is persisted, remove the remember token (but only if
      # it exists), and save the record without validations.
      def forget_me!
        return unless persisted?
        self.remember_token = nil if respond_to?(:remember_token)
        self.remember_created_at = nil if self.class.expire_all_remember_me_on_sign_out
        save(validate: false)
      end
    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
        def_delegators :@s, :scan_until, :skip_until, :string
    
          if scanner.match?(/url\(/i)
        script_parser = Sass::Script::Parser.new(scanner, @line, to_parser_offset(offset), @options)
        str = script_parser.parse_string
    
        # Same as `Kernel.puts`, but doesn't print anything if the `--quiet` option is set.
    #
    # @param args [Array] Passed on to `Kernel.puts`
    def puts(*args)
      return if @options[:for_engine][:quiet]
      Kernel.puts(*args)
    end
    
          # Get the publicly-visible URL for an imported file. This URL is used by
      # source maps to link to the source stylesheet. This may return `nil` to
      # indicate that no public URL is available; however, this will cause
      # sourcemap generation to fail if any CSS is generated from files imported
      # from this importer.
      #
      # If an absolute 'file:' URI can be produced for an imported file, that
      # should be preferred to returning `nil`. However, a URL relative to
      # `sourcemap_directory` should be preferred over an absolute 'file:' URI.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param sourcemap_directory [String, NilClass] The absolute path to a
      #   directory on disk where the sourcemap will be saved. If uri refers to
      #   a file on disk that's accessible relative to sourcemap_directory, this
      #   may return a relative URL. This may be `nil` if the sourcemap's
      #   eventual location is unknown.
      # @return [String?] The publicly-visible URL for this file, or `nil`
      #   indicating that no publicly-visible URL exists. This should be
      #   appropriately URL-escaped.
      def public_url(uri, sourcemap_directory)
        return if @public_url_warning_issued
        @public_url_warning_issued = true
        Sass::Util.sass_warn <<WARNING
WARNING: #{self.class.name} should define the #public_url method.
WARNING
        nil
      end
    
            # TODO: this preserves historical behavior, but it's possible
        # :filename should be either normalized to the native format
        # or consistently URI-format.
        full_filename = full_filename.tr('\\', '/') if Sass::Util.windows?