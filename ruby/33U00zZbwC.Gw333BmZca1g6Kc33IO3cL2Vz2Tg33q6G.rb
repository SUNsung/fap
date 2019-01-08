
        
        def custom_release_header_anchors(markdown)
  header_regexp = %r!^(\d{1,2})\.(\d{1,2})\.(\d{1,2}) \/ \d{4}-\d{2}-\d{2}!
  section_regexp = %r!^### \w+ \w+$!
  markdown.split(%r!^##\s!).map do |release_notes|
    _, major, minor, patch = *release_notes.match(header_regexp)
    release_notes
      .gsub(header_regexp, '\\0\n{: #v\\1-\\2-\\3}')
      .gsub(section_regexp) { |section| '#{section}\n{: ##{slugify(section)}-v#{major}-#{minor}-#{patch}}' }
  end.join('\n## ')
end
    
    STDOUT.sync = true
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
          it 'increases total_unread_notifications' do
        expect { Fabricate(:notification, user: user); user.reload }.to change(user, :total_unread_notifications)
      end
    
        def resource_params
      params.require(:user).permit(
        :unconfirmed_email
      )
    end
  end
end

    
    class Api::Web::SettingsController < Api::Web::BaseController
  respond_to :json
    
            if e.is_a?(Sass::SyntaxError)
          $stderr.puts e.sass_backtrace_str('standard input')
        else
          $stderr.print '#{e.class}: ' unless e.class == RuntimeError
          $stderr.puts e.message.to_s
        end
        $stderr.puts '  Use --trace for backtrace.'
    
          # @see Base#watched_file?
      def watched_file?(filename)
        # Check against the root with symlinks resolved, since Listen
        # returns fully-resolved paths.
        filename =~ /\.s[ac]ss$/ && filename.start_with?(@real_root + File::SEPARATOR)
      end
    
    Given /^I run a migration$/ do
  step %[I successfully run `rake db:migrate --trace`]
end
    
      def migration_class_name
    migration_name.camelize
  end
    
    begin
  # Use mime/types/columnar if available, for reduced memory usage
  require 'mime/types/columnar'
rescue LoadError
  require 'mime/types'
end
    
        private
    
        # Returns the pluralized form of the attachment name. e.g.
    # 'avatars' for an attachment of :avatar
    def attachment attachment, style_name
      plural_cache.pluralize_symbol(attachment.name)
    end