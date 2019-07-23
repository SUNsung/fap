
        
            def log_email_process_failure(mail_string, exception)
      if SiteSetting.log_mail_processing_failures
        Rails.logger.warn('Email can not be processed: #{exception}\n\n#{mail_string}')
      end
    end
    
        it 'should import from http url' do
      Discourse::Utils.expects(:execute_command).with('git', 'clone', url, @temp_folder)
    
        valid_users.map! do |id, username_lower, email|
      valid_emails[email] = valid_usernames[username_lower] = id
      id
    end
    
        guardian.ensure_can_see!(@filter_on_category)
  end
    
            before do
          SiteSetting.authorized_extensions = 'jpg'
        end
    
          it 'registers an offense when inside a nested #{keyword}' do
        src = <<~RUBY
          #{keyword} A
            #{keyword} B
              #{modifier}
            end
          end
        RUBY
        inspect_source(src)
        expect(cop.offenses.size).to eq(1)
      end
    end
  end
    
      context 'when a variable is reassigned with binary operator ' \
           'assignment while assigning to itself in rhs ' \
           'then referenced' do
    it 'registers an offense for the assignment in rhs' do
      expect_offense(<<~RUBY)
        def some_method
          foo = 1
          foo += foo = 2
                 ^^^ Useless assignment to variable - `foo`.
          foo
        end
      RUBY
    end
  end
    
      describe '#each_branch' do
    let(:source) do
      ['if foo?',
       '  1',
       'elsif bar?',
       '  2',
       'else',
       '  3',
       'end'].join('\n')
    end
    
          diff   = variant.amount_in(current_currency) - product_amount
      amount = Spree::Money.new(diff.abs, currency: current_currency).to_html
      label  = diff > 0 ? :add : :subtract
      '(#{Spree.t(label)}: #{amount})'.html_safe
    end
    
          def preference_field_for(form, field, options)
        case options[:type]
        when :integer
          form.text_field(field, preference_field_options(options))
        when :boolean
          form.check_box(field, preference_field_options(options))
        when :string
          form.text_field(field, preference_field_options(options))
        when :password
          form.password_field(field, preference_field_options(options))
        when :text
          form.text_area(field, preference_field_options(options))
        else
          form.text_field(field, preference_field_options(options))
        end
      end
    
        # shows completed orders first, by their completed_at date, then uncompleted orders by their created_at
    scope :reverse_chronological, -> { order(Arel.sql('spree_orders.completed_at IS NULL'), completed_at: :desc, created_at: :desc) }
    
          def email
        order.email
      end
    
        alias get get_preference
    
                it 'deducts the default vat and applies the foreign vat to calculate the price' do
              shipping_rates = subject.shipping_rates(package)
              #
              # deduct default vat: 4.00 / 1.2 = 3.33 (rounded)
              # apply foreign vat: 3.33 * 1.3 = 4.33 (rounded)
              expect(shipping_rates.first.cost).to eq(4.33)
            end
          end
        end
      end
    end
  end
end

    
            def show
          @image = Image.accessible_by(current_ability, :show).find(params[:id])
          respond_with(@image)
        end