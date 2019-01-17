
        
            remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
    When /^I (?:sign|log) in with password '([^']*)'( on the mobile website)?$/ do |password, mobile|
  @me.password = password
  automatic_login
  confirm_login mobile
end
    
    Then /^'([^']*)' should be post (\d+)$/ do |post_text, position|
  stream_element_numbers_content(position).should have_content(post_text)
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

    
        it 'returns a 404 for a post not visible to the user' do
      sign_in eve
      expect {
        get :index, params: {post_id: @message.id}
      }.to raise_error(ActiveRecord::RecordNotFound)
    end
    
              expect(User.find_by(username: 'jdoe').invited_by).to eq(bob)
        end
      end
    end
    
    @@ login
<form action='/'>
  <label for='user'>User Name:</label>
  <input name='user' value='' />
  <input type='submit' value='GO!' />
</form>
    
    # This is basically a copy of the original bundler 'bundle' shim
# with the addition of the loading of our Bundler patches that
# modify Bundler's caching behaviour.
    
        def explicitly_declared_plugins_specs
      @plugins_to_package.collect do |plugin_pattern|
        specs = SpecificationHelpers.find_by_name_with_wildcards(plugin_pattern)
    
          # Try to add the gems to the current gemfile and lock file, if successful
      # both of them will be updated. This injector is similar to Bundler's own injector class
      # minus the support for additionals source and doing local resolution only.
      ::Bundler::LogstashInjector.inject!(pack)
    
      def self.source_root
    @source_root ||= File.expand_path('../templates', __FILE__)
  end
    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end

    
        # Gives a Geometry representing the given height and width
    def initialize(width = nil, height = nil, modifier = nil)
      if width.is_a?(Hash)
        options = width
        @height = options[:height].to_f
        @width = options[:width].to_f
        @modifier = options[:modifier]
        @orientation = options[:orientation].to_i
      else
        @height = height.to_f
        @width  = width.to_f
        @modifier = modifier
      end
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
    
        def define_instance_getter
      name = @name
      options = @options