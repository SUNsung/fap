
        
        Mercenary.program(:jekyll) do |p|
  p.version Jekyll::VERSION
  p.description 'Jekyll is a blog-aware, static site generator in Ruby'
  p.syntax 'jekyll <subcommand> [options]'
    
      matter = matter.join.chomp
  content = \
    if !input_hash['input'] || !input_hash['filter']
      then input_hash['content']
    else '{{ #{input_hash['input']} | ' \
        '#{input_hash['filter']} }}'
    end
    
          def render!(*args)
        measure_time do
          measure_bytes do
            @template.render!(*args)
          end
        end
      end
    
        # Check whether a gem plugin is allowed to be used during this build.
    #
    # plugin_name - the name of the plugin
    #
    # Returns true if the plugin name is in the whitelist or if the site is not
    #   in safe mode.
    def plugin_allowed?(plugin_name)
      !site.safe || whitelist.include?(plugin_name)
    end
    
      def fish_completion_caveats
    if keg && keg.completion_installed?(:fish) && which('fish') then <<-EOS.undent
      fish completion has been installed to:
        #{HOMEBREW_PREFIX}/share/fish/vendor_completions.d
      EOS
    end
  end
    
      def internal_commands
    find_internal_commands HOMEBREW_LIBRARY_PATH/'cmd'
  end
    
      def kernel
    `uname -m`.chomp
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
    
              url = client.fetch_images(image_type: image_type, language: listing.language).last
          next unless url
    
          # This change happend on 2018-04-24
      # rollout cannot be sent on any other track besides 'rollout'
      # https://github.com/fastlane/fastlane/issues/12372
      rollout = nil unless track == 'rollout'
    
          def delete(key)
        super(convert_key(key))
      end
    
              if argv.length == 2
            # @deprecated
            @env.ui.warn('WARNING: The second argument to `vagrant box remove`')
            @env.ui.warn('is deprecated. Please use the --provider flag. This')
            @env.ui.warn('feature will stop working in the next version.')
            options[:provider] = argv[1]
          end
    
      def meta
    object.file.meta
  end
end

    
      def type
    'Emoji'
  end
    
        File.write(dest, Oj.dump(map))
    puts 'Wrote emojo to destination! (#{dest})'
  end
end

    
    class NotificationMailerPreview < ActionMailer::Preview
  # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/mention
  def mention
    m = Mention.last
    NotificationMailer.mention(m.account, Notification.find_by(activity: m))
  end