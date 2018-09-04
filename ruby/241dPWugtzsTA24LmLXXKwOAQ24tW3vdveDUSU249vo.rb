
        
                def initialize(object_name, method_name, template_object, options = {})
          @object_name, @method_name = object_name.to_s.dup, method_name.to_s.dup
          @template_object = template_object
    
                options = options.dup
            options[:field_name]           = @method_name
            options[:include_position]     = true
            options[:prefix]             ||= @object_name
            options[:index]                = @auto_index if @auto_index && !options.has_key?(:index)
    
        def exists?(path, prefixes, *args)
      find_all(path, prefixes, *args).any?
    end
    
    Given /^a user with username '([^\']*)' and password '([^\']*)'$/ do |username, password|
  @me ||= FactoryGirl.create(:user, :username => username, :password => password,
                  :password_confirmation => password, :getting_started => false)
  @me.aspects.create(:name => 'Besties')
  @me.aspects.create(:name => 'Unicorns')
  @me.reload
end
    
    require Rails.root.join('spec', 'helper_methods')
require Rails.root.join('spec', 'support', 'inlined_jobs')
require Rails.root.join('spec', 'support', 'user_methods')
include HelperMethods
    
      def confirm_not_signed_up
    confirm_on_page('the new user registration page')
    confirm_form_validation_error('form#new_user')
  end
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end
