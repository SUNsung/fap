
        
                def initialize(symbol)
          @symbol = symbol.to_sym
        end
    
        class AbstractHelpersBlock < ControllerWithHelpers
      helper do
        include AbstractController::Testing::HelperyTest
      end
    end
    
      class Notification < ApplicationRecord
  end
    
    RSpec::Matchers.define :have_value do |expected|
  match do |actual|
    await_condition { actual.value && actual.value.include?(expected) }
  end
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
        it 'lets a user destroy their like' do
      current_user = controller.send(:current_user)
      expect(current_user).to receive(:retract).with(@like)
    
        it 'succeeds for notification dropdown' do
      Timecop.travel(6.seconds.ago) do
        @notification.touch
      end
      get :index, format: :json
      expect(response).to be_success
      response_json = JSON.parse(response.body)
      note_html = Nokogiri::HTML(response_json['notification_list'][0]['also_commented']['note_html'])
      timeago_content = note_html.css('time')[0]['data-time-ago']
      expect(response_json['unread_count']).to be(1)
      expect(response_json['unread_count_by_type']).to eq(
        'also_commented'       => 1,
        'comment_on_post'      => 0,
        'contacts_birthday'    => 0,
        'liked'                => 0,
        'mentioned'            => 0,
        'mentioned_in_comment' => 0,
        'reshared'             => 0,
        'started_sharing'      => 0
      )
      expect(timeago_content).to include(@notification.updated_at.iso8601)
      expect(response.body).to match(/note_html/)
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

    
        private
    def uncompress(source)
      temporary_directory = Stud::Temporary.pathname
      LogStash::Util::Zip.extract(source, temporary_directory, LOGSTASH_PATTERN_RE)
      temporary_directory
    rescue Zip::Error => e
      # OK Zip's handling of file is bit weird, if the file exist but is not a valid zip, it will raise
      # a `Zip::Error` exception with a file not found message...
      raise InvalidPackError, 'Cannot uncompress the zip: #{source}'
    end
    
      it 'records when the config was read' do
    expect(subject.read_at).to be <= Time.now
  end
    
            def delimiter_delta
          return 0 if first.same_line?(second)
          return 0 if first.delimiter != second.delimiter
    
          # @path_cache maps directories to configuration paths. We search
      # for .rubocop.yml only if we haven't already found it for the
      # given directory.
      @path_cache = {}
    
          def preference_field_options(options)
        field_options = case options[:type]
                        when :integer
                          {
                            size: 10,
                            class: 'input_integer form-control'
                          }
                        when :boolean
                          {}
                        when :string
                          {
                            size: 10,
                            class: 'input_string form-control'
                          }
                        when :password
                          {
                            size: 10,
                            class: 'password_string form-control'
                          }
                        when :text
                          {
                            rows: 15,
                            cols: 85,
                            class: 'form-control'
                          }
                        else
                          {
                            size: 10,
                            class: 'input_string form-control'
                          }
                        end
    
            # Dynamically defines our stores checkout steps to ensure we check authorization on each step.
        Order.checkout_steps.keys.each do |step|
          define_method step do
            find_order
            authorize! :update, @order, params[:token]
          end
        end
    
            # Takes besides the products attributes either an array of variants or
        # an array of option types.
        #
        # By submitting an array of variants the option types will be created
        # using the *name* key in options hash. e.g
        #
        #   product: {
        #     ...
        #     variants: {
        #       price: 19.99,
        #       sku: 'hey_you',
        #       options: [
        #         { name: 'size', value: 'small' },
        #         { name: 'color', value: 'black' }
        #       ]
        #     }
        #   }
        #
        # Or just pass in the option types hash:
        #
        #   product: {
        #     ...
        #     option_types: ['size', 'color']
        #   }
        #
        # By passing the shipping category name you can fetch or create that
        # shipping category on the fly. e.g.
        #
        #   product: {
        #     ...
        #     shipping_category: 'Free Shipping Items'
        #   }
        #
        def new; end
    
          @@reimbursement_attributes = [
        :id, :reimbursement_status, :customer_return_id, :order_id,
        :number, :total, :created_at, :updated_at
      ]