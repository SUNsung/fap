
        
            s = nil
    homebrew_site_packages = Language::Python.homebrew_site_packages
    user_site_packages = Language::Python.user_site_packages 'python'
    pth_file = user_site_packages/'homebrew.pth'
    instructions = <<-EOS.undent.gsub(/^/, '  ')
      mkdir -p #{user_site_packages}
      echo 'import site; site.addsitedir('#{homebrew_site_packages}')' >> #{pth_file}
    EOS
    
    Badge.seed do |b|
  b.id = Badge::FirstLink
  b.name = 'First Link'
  b.badge_type_id = BadgeType::Bronze
  b.multiple_grant = false
  b.target_posts = true
  b.show_posts = true
  b.query = BadgeQueries::FirstLink
  b.default_badge_grouping_id = BadgeGrouping::GettingStarted
  b.trigger = Badge::Trigger::PostRevision
  b.system = true
end
    
              if @job.blank?
            @pipeline.coverage
          else
            @pipeline.builds
              .find_by(name: @job)
              .try(:coverage)
          end
        end
      end
    end
  end
end

    
            def metadata
          @metadata ||= Pipeline::Metadata.new(self)
        end
    
            def key_width
          62
        end
    
    # This is basically a copy of the original bundler 'bundle' shim
# with the addition of the loading of our Bundler patches that
# modify Bundler's caching behaviour.
    
          PluginManager.ui.info('Installing file: #{local_file}')
      uncompressed_path = uncompress(local_file)
      PluginManager.ui.debug('Pack uncompressed to #{uncompressed_path}')
      pack = LogStash::PluginManager::PackInstaller::Pack.new(uncompressed_path)
      raise PluginManager::InvalidPackError, 'The pack must contains at least one plugin' unless pack.valid?
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end
    
              if arg.braces?
            unless braces_around_second_from_end
              add_arg_offense(arg, :redundant)
            end
          elsif braces_around_second_from_end
            add_arg_offense(arg, :missing)
          end
        end
    
        context 'but no comment after the last element' do
      it 'autocorrects the closing brace' do
        new_source = autocorrect_source(source)
    
          # Returns the inverse keyword of the `if` node as a string. Returns `if`
      # for `unless` nodes and vice versa. Returns an empty string for ternary
      # operators.
      #
      # @return [String] the inverse keyword of the `if` statement
      def inverse_keyword
        if keyword == 'if'
          'unless'
        elsif keyword == 'unless'
          'if'
        else
          ''
        end
      end