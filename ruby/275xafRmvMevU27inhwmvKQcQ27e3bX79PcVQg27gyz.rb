
        
                  def instantiate_builder(builder_class, item, value, text, html_options)
            builder_class.new(@template_object, @object_name, @method_name, item,
                              sanitize_attribute_name(value), text, value, html_options)
          end
    
            def render(&block)
          render_collection_for(RadioButtonBuilder, &block)
        end
    
          def to_str
        @string
      end
    
          begin
        Dir.chdir(custom_dir) do # go up from the fastlane folder, to the project folder
          # If another action is calling this action, we shouldn't show it in the summary
          # (see https://github.com/fastlane/fastlane/issues/4546)
    
        # An optional block which is called when options conflict happens
    attr_accessor :conflict_block
    
        # An empty argument will be skipped, so return empty quotes.
    # https://github.com/ruby/ruby/blob/a6413848153e6c37f6b0fea64e3e871460732e34/lib/shellwords.rb#L142-L143
    return ''''.dup if str.empty?
    
    puts('[WARNING] You are calling #{tool_name} directly. Usage of the tool name without the `fastlane` prefix is deprecated in fastlane 2.0'.yellow)
puts('Please update your scripts to use `fastlane #{tool_name} #{full_params}` instead.'.yellow)
    
            c.action do |args, options|
          Cert.config = FastlaneCore::Configuration.create(Cert::Options.available_options, options.__hash__)
          Cert::Runner.new.launch
        end
      end
    
      def down
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id
  end
    
    Then /^I should have (\d+) nsfw posts$/ do |num_posts|
  page.should have_css('.nsfw-shield', count: num_posts.to_i)
end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)