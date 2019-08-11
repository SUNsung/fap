
        
            desc 'Get the text for a specific license' do
      detail 'This feature was introduced in GitLab 8.7.'
      success ::API::Entities::License
    end
    params do
      requires :name, type: String, desc: 'The name of the template'
    end
    get 'templates/licenses/:name', requirements: { name: /[\w\.-]+/ } do
      template = TemplateFinder.build(:licenses, nil, name: params[:name]).execute
    
      sidekiq_options retry: 3
    
        def sha256(value)
      salt = Settings.attr_encrypted_db_key_base_truncated
      ::Digest::SHA256.base64digest('#{value}#{salt}')
    end
    
            it { expect(presenter.can_resend_invite?).to eq(true) }
      end
    
            def diffs
          @diffs ||= diffable.raw_diffs(diff_options)
        end
    
        def env
      LOGSTASH_ENV
    end
    
      describe '#system?' do
    context 'when the pipeline is a system pipeline' do
      let(:settings) { mock_settings({ 'pipeline.system' => true })}
    
    Sidekiq.logger.level = Logger::ERROR
    
      it 'throws away dead processors' do
    mgr = new_manager(options)
    init_size = mgr.workers.size
    processor = mgr.workers.first
    begin
      mgr.processor_died(processor, 'ignored')
    
          I18n.enforce_available_locales = false
      I18n.available_locales = nil
    end
  end
end

    
          Time.stub(:now, created_time) do
        @retry.schedule (enqueued_time - 60).to_f, @error_1.merge!('created_at' => created_time.to_f)
        @retry.schedule (enqueued_time - 50).to_f, @error_2.merge!('created_at' => created_time.to_f)
        @retry.schedule (enqueued_time + 60).to_f, @error_3.merge!('created_at' => created_time.to_f)
        @scheduled.schedule (enqueued_time - 60).to_f, @future_1.merge!('created_at' => created_time.to_f)
        @scheduled.schedule (enqueued_time - 50).to_f, @future_2.merge!('created_at' => created_time.to_f)
        @scheduled.schedule (enqueued_time + 60).to_f, @future_3.merge!('created_at' => created_time.to_f)
      end
    
        it 'stubs the delay call on models' do
      assert_raises InlineError do
        InlineFooModel.delay.bar('three')
      end
    end
  end
    
    class SinatraWorker
  include Sidekiq::Worker