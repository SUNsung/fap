
        
              # Returns true if the given value is present in the set.
      #
      # raw_key - The key of the set to check.
      # value - The value to check for.
      def self.set_includes?(raw_key, value)
        key = cache_key_for(raw_key)
    
              Gitlab::Database.bulk_insert(LabelLink.table_name, rows)
        end
    
            def importer_class
          LfsObjectImporter
        end
    
            expose_attribute :id, :login
    
          new_email = resource_params.fetch(:unconfirmed_email)
    
      def show
    if subscription.valid?(params['hub.topic'])
      @account.update(subscription_expires_at: future_expires)
      render plain: encoded_challenge, status: 200
    else
      head 404
    end
  end
    
      def compatible_locale
    http_accept_language.compatible_language_from(available_locales)
  end
    
      def rate_limit_reset
    (request_time + reset_period_offset).iso8601(6)
  end
    
          attr_reader :page, :diff, :versions, :message, :allow_editing
    
          def sidebar
        if @sidebar.nil?
          if page = @page.sidebar
            @sidebar = page.text_data
          else
            @sidebar = false
          end
        end
        @sidebar
      end
    
          def author
        first = page.last_version
        return DEFAULT_AUTHOR unless first
        first.author.name.respond_to?(:force_encoding) ? first.author.name.force_encoding('UTF-8') : first.author.name
      end
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
    module RailsCommandHelpers
  def framework_version?(version_string)
    framework_version =~ /^#{version_string}/
  end
    
        def names_for(klass)
      @attachments[klass].keys
    end
    
        def register_new_attachment
      Paperclip::AttachmentRegistry.register(@klass, @name, @options)
    end
    
        # Returns the Rails.root constant.
    def rails_root attachment, style_name
      Rails.root
    end