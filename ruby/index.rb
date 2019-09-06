
        
                def verify_binary(binary)
          # Checks for the existence of chef binary and error if it
          # doesn't exist.
          if windows?
            command = 'if ((&'#{binary}' -v) -Match 'Chef*'){ exit 0 } else { exit 1 }'
          else
            command = 'sh -c 'command -v #{binary}''
          end
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
        it 'should receive a valid address' do
      allow(provider_config).to receive(:compose).and_return(false)
      allow(platform).to receive(:windows?).and_return(false)
      allow(platform).to receive(:darwin?).and_return(false)
      allow(driver_obj).to receive(:created?).and_return(true)
      allow(driver_obj).to receive(:state).and_return(:running)
      allow(driver_obj).to receive(:execute).with(:get_network_config).and_return(result)
      allow(driver_obj).to receive(:inspect_container).and_return(network_settings)
    
    require Vagrant.source_root.join('plugins/providers/virtualbox/provider')
    
            # Prints the given message at info level for a trigger
        #
        # @param [String] message The string to be printed
        def info(message)
          @ui.info(message)
        end
    
            entries = []
        prune   = []
        @env.machine_index.each do |entry|
          # If we're pruning and this entry is invalid, skip it
          # and prune it later.
          if options[:prune] && !entry.valid?(@env.home_path)
            prune << entry
            next
          end
    
        assert_ref @c3,    '::C3'
    assert_ref @c3_h1, '::C3::H1'
    
      def test_get
    lines = push_history(5)
    lines.each_with_index do |s, i|
      assert_external_string_equal(s, Readline::HISTORY[i])
    end
  end
    
      def test_ed_delete_prev_word_for_mbchar_by_plural_code_points
    input_keys('あいう か\u3099き\u3099く\u3099{さしす}たちつ')
    assert_byte_pointer_size('あいう か\u3099き\u3099く\u3099{さしす}たちつ')
    assert_cursor(27)
    assert_cursor_max(27)
    input_keys('\C-w')
    assert_byte_pointer_size('あいう か\u3099き\u3099く\u3099{さしす}')
    assert_cursor(21)
    assert_cursor_max(21)
    assert_line('あいう か\u3099き\u3099く\u3099{さしす}')
    input_keys('\C-w')
    assert_byte_pointer_size('あいう か\u3099き\u3099く\u3099{')
    assert_cursor(14)
    assert_cursor_max(14)
    assert_line('あいう か\u3099き\u3099く\u3099{')
    input_keys('\C-w')
    assert_byte_pointer_size('あいう ')
    assert_cursor(7)
    assert_cursor_max(7)
    assert_line('あいう ')
    input_keys('\C-w')
    assert_byte_pointer_size('')
    assert_cursor(0)
    assert_cursor_max(0)
    assert_line('')
  end
    }
    }
    
          it 'Does not render variant when no variants published' do
        html_variant = create(:html_variant, published: false, approved: true)
        get article.path + '?variant_version=1'
        expect(response.body).not_to include html_variant.html
      end
    
      def user_is_author?
    if record.instance_of?(Article)
      record.user_id == user.id
    else
      record.pluck(:user_id).uniq == [user.id]
    end
  end
    
      private
    
        alias [] get_preference
    alias []= set_preference
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
          authorize! :show, @order, order_token
        end
    
            def index
          @product_properties = @product.product_properties.accessible_by(current_ability).
                                ransack(params[:q]).result.
                                page(params[:page]).per(params[:per_page])
          respond_with(@product_properties)
        end
    
        obj = Helpers.new('HTTP_ACCEPT_LANGUAGE' => 'ru,en')
    assert_equal 'ru', obj.locale
    
      it 'should remove all but last Sidekiq::DeadSet.max_jobs-1 jobs' do
    Sidekiq::DeadSet.stub(:max_jobs, 3) do
      dead_set.kill(Sidekiq.dump_json(jid: '000101', class: 'MyWorker1', args: []))
      dead_set.kill(Sidekiq.dump_json(jid: '000102', class: 'MyWorker2', args: []))
      dead_set.kill(Sidekiq.dump_json(jid: '000103', class: 'MyWorker3', args: []))
    end
    
      class UserMailer < ActionMailer::Base
    def greetings(a, b)
      raise 'Should not be called!'
    end
  end