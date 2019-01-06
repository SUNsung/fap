
        
                return return_val
      rescue => ex
        Dir.chdir(path_to_use) do
          # Provide error block exception without color code
          begin
            error_blocks[current_platform].call(current_lane, ex, parameters) if current_platform && error_blocks[current_platform]
            error_blocks[nil].call(current_lane, ex, parameters) if error_blocks[nil]
          rescue => error_block_exception
            UI.error('An error occurred while executing the `error` block:')
            UI.error(error_block_exception.to_s)
            raise ex # raise the original error message
          end
        end
    
          def self.description
        'This will add an annotated git tag to the current branch'
      end
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            prefix: '#{prefix}',
          })
        end').runner.execute(:test)
    
          it 'Uses the provided pretty format to collect log messages' do
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits(pretty: '%s%n%b')
        end').runner.execute(:test)
    
          it 'logs the command if verbose' do
        with_verbose(true) do
          allow(Fastlane::Actions).to receive(:sh).with(anything, { log: true }).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: 'foo.bar')
          end').runner.execute(:test)
        end
      end
    
    class Array
  def shelljoin
    CrossplatformShellwords.shelljoin(self)
  end
end
    
            FastlaneCore::CertChecker.installed_identies
      end
    
        os = 'other'
    shelljoin_testcases.each do |testcase|
      it testcase['it'] + ': ' + testcase['it_result'][os] do
        array = testcase['input']
        expect_correct_implementation_to_be_called(array, :shelljoin, os)
        joined = array.shelljoin
        expect(joined).to eq(testcase['expect'][os])
      end
    end
  end
end
    
    full_params = ARGV.shelljoin
    
            def preload_pipeline_warnings
          # This preloads the number of warnings for every pipeline, ensuring
          # that Ci::Pipeline#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.number_of_warnings
        end
    
            def id_for_already_imported_cache(issue)
          issue.number
        end
    
            # Builds a lfs_object
        def self.from_api_response(lfs_object)
          new({ oid: lfs_object[0], download_link: lfs_object[1] })
        end
    
            '#{route.request_method} #{route.path}' if route
      end
    end
  end
end

    
      def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
            selected_modules.each do |m|
          mod = Devise::Models.const_get(m.to_s.classify)
    
            if Devise.activerecord51?
          def clear_reset_password_token?
            encrypted_password_changed = respond_to?(:will_save_change_to_encrypted_password?) && will_save_change_to_encrypted_password?
            authentication_keys_changed = self.class.authentication_keys.any? do |attribute|
              respond_to?('will_save_change_to_#{attribute}?') && send('will_save_change_to_#{attribute}?')
            end
    
          old_initial_revision_var = 'HOMEBREW_UPDATE_BEFORE#{repo_var}'
      old_current_revision_var = 'HOMEBREW_UPDATE_AFTER#{repo_var}'
    
          [ scale_geometry, crop_geometry ]
    end
    
        def geometry_string
      begin
        orientation = Paperclip.options[:use_exif_orientation] ?
          '%[exif:orientation]' : '1'
        Paperclip.run(
          Paperclip.options[:is_windows] ? 'magick identify' : 'identify',
          '-format '%wx%h,#{orientation}' :file', {
            :file => '#{path}[0]'
          }, {
            :swallow_stderr => true
          }
        )
      rescue Terrapin::ExitStatusError
        ''
      rescue Terrapin::CommandNotFoundError => e
        raise_because_imagemagick_missing
      end
    end