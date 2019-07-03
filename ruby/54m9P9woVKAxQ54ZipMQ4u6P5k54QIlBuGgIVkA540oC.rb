
        
          def self.stats
    s = HashWithIndifferentAccess.new({})
    
        def later(desc = nil, db = RailsMultisite::ConnectionManagement.current_db, &blk)
      if @async
        start_thread if !@thread&.alive? && !@paused
        @queue << [db, blk, desc]
      else
        blk.call
      end
    end
    
        def extendable?(directive)
      EXTENDABLE_DIRECTIVES.include?(directive)
    end
    
      context 'with a theme' do
    let!(:theme) {
      Fabricate(:theme).tap do |t|
        settings = <<~YML
          extend_content_security_policy:
            type: list
            default: 'script-src: from-theme.com'
        YML
        t.set_field(target: :settings, name: :yaml, value: settings)
        t.save!
      end
    }
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
          it 'succeeds' do
        expect { @controller.send(:reset_authentication_token) }.to_not raise_error
      end
    end
    
          it 'it doesn't call toggle_hidden_shareable' do
        expect(@controller.current_user).not_to receive(:toggle_hidden_shareable).with(an_instance_of(StatusMessage))
        begin
          put :update, params: {id: 42, post_id: @status.id}, format: :js
        rescue ActiveRecord::RecordNotFound
        end
      end
    end
  end
end

    
        def generate_new_liquid(link)
      Liquid::Template.register_tag('jsfiddle', JSFiddleTag)
      Liquid::Template.parse('{% jsfiddle #{link} %}')
    end
    
      def user_is_comment_banned?
    user.has_role? :comment_banned
  end
    
      context 'called with null values' do
    it 'writes rules for others' do
      ruleset = 'position: static; ' +
                'top: 11px; ' +
                'left: 13px;'
      bad_rule = 'position-bottom: null; position-right: null;'
    
          expect('.size-both').to have_ruleset(rule)
    end
  end
    
      def failed_class_counts(queue = params[:queue])
    classes = Hash.new(0)
    Resque::Failure.each(0, Resque::Failure.count(queue), queue) do |_, item|
      class_name = item['payload']['class'] if item['payload']
      class_name ||= 'nil'
      classes[class_name] += 1
    end
    classes
  end
    
      task :install => [:about, :download, :make] do
    bin_dir = '/usr/bin'
    conf_dir = '/etc'
    
              it 'raises an integrity error' do
            is_expected.to raise_error(CarrierWave::IntegrityError)
          end
        end
    
          context 'with cached file' do
        before { uploader.cache!(test_file) }
    
          def check_size!(new_file)
        size = new_file.size
        expected_size_range = size_range
        if expected_size_range.is_a?(::Range)
          if size < expected_size_range.min
            raise CarrierWave::IntegrityError, I18n.translate(:'errors.messages.min_size_error', :min_size => ActiveSupport::NumberHelper.number_to_human_size(expected_size_range.min))
          elsif size > expected_size_range.max
            raise CarrierWave::IntegrityError, I18n.translate(:'errors.messages.max_size_error', :max_size => ActiveSupport::NumberHelper.number_to_human_size(expected_size_range.max))
          end
        end
      end