
        
                default_connectors = {
          words_connector: ', ',
          two_words_connector: ' and ',
          last_word_connector: ', and '
        }
        if defined?(I18n)
          i18n_connectors = I18n.translate(:'support.array', locale: options[:locale], default: {})
          default_connectors.merge!(i18n_connectors)
        end
        options = default_connectors.merge!(options)
    
            class << self
          def field_type
            @field_type ||= name.split('::').last.sub('Field', '').downcase
          end
        end
    
        def initialize(name = nil, path = nil, type = nil)
      self.name = name
      self.path = path
      self.type = type
    
        def blank?
      body.blank?
    end
    
        def with_filters(*filters)
      stack = FilterStack.new
      stack.push(*filters)
      pipeline.instance_variable_set :@filters, stack.to_a.freeze
      yield
    ensure
      @pipeline = nil
    end
    
        def process_url?(url)
      base_url.contains?(url)
    end
    
        def relative_path_from(url)
      self.class.parse(url).relative_path_to(self)
    end
  end
end

    
      before_action :set_account
  before_action :set_statuses
    
          if @account_moderation_note.save
        redirect_to admin_account_path(@account_moderation_note.target_account_id), notice: I18n.t('admin.account_moderation_notes.created_msg')
      else
        @account          = @account_moderation_note.target_account
        @moderation_notes = @account.targeted_moderation_notes.latest
    
        def create
      authorize :status, :update?
    
      def update
    response, status = process_push_request
    render plain: response, status: status
  end
    
      def payload
    @_payload ||= request.body.read
  end
    
      respond_to :json
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Then(/^directory symlinks are created in the new release$/) do
  pending
  TestApp.linked_dirs.each do |dir|
    run_vagrant_command(test_symlink_exists(TestApp.release_path.join(dir)))
  end
end
    
    Given(/^a linked file '(.*?)'$/) do |file|
  # ignoring other linked files
  TestApp.append_to_deploy_file('set :linked_files, ['#{file}']')
end
    
          def roles_for(names)
        options = extract_options(names)
        s = Filter.new(:role, names).filter(servers_by_key.values)
        s.select { |server| server.select?(options) }
      end
    
          # This is used for duck typing with `pair` nodes which also appear as
      # `hash` elements.
      #
      # @return [false]
      def hash_rocket?
        false
      end