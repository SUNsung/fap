
        
            def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
        def root_path
      self.class.root_path
    end
    
          def inherited(subclass)
        super
        subclass.params = params.deep_dup
        subclass.headers = headers.deep_dup
        subclass.force_gzip = force_gzip
      end
    end
    
        def translation_scope
      'devise.confirmations'
    end
end

    
      protected
    
    class DeviseCreateUsers < ActiveRecord::Migration
  def change
    create_table(:users) do |t|
      t.string :email,              null: false
      t.string :encrypted_password, null: true
      t.timestamps null: false
    end
    
            if uri 
          path = remove_domain_from_uri(uri)
          path = add_fragment_back_to_path(uri, path)
    
          def mailer_from(mapping)
        mailer_sender(mapping, :from)
      end
    
          private
    
            log_action :change_email, @user
    
      private
    
      def available_locales
    I18n.available_locales.reverse
  end
end

    
        def initialize(*args)
      @s = StringScanner.new(*args)
    end
    
        def log_file_info(s)
      puts '    #{magenta s}'
    end
    
    Then /^(?:|I )should see '([^']*)'$/ do |text|
  expect(page).to have_content(text)
end

    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
        def initialize(klass, name, options)
      @klass = klass
      @name = name
      @options = options
    end