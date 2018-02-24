      topic = Topic.find_by(id: topic_id)
    
      def validate_type
    errors.add(:type, 'cannot be changed once an instance has been created') if type_changed? && !new_record?
    errors.add(:type, 'is not a valid type') unless self.class.valid_type?(type)
  end
    
      included do
    include Oauthable
    
      delegate :form_configurable_attributes, to: :class
  delegate :form_configurable_fields, to: :class
    
      protected
    
    module LogStash::Api::AppHelpers
  # This method handle both of the normal flow *happy path*
  # and the display or errors, if more custom logic is added here
  # it will make sense to separate them.
  #
  # See `#error` method in the `LogStash::Api::Module::Base`
  def respond_with(data, options={})
    as     = options.fetch(:as, :json)
    filter = options.fetch(:filter, '')
    
        on_event do |event, data|
      Thread.current[:logstash_output_codec_batch] << [event, data]
    end
  end
    
          expect('.border-style-implied-left').to have_rule(rule)
    end
  end
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'border-top-width: 11px; ' +
                'border-right-width: 12px; ' +
                'border-left-width: 13px;'
      bad_rule = 'border-bottom-width: null;'
    
          expect('.all-buttons-active').to have_ruleset(ruleset)
    end
  end
    
          expect('.padding-all').to have_rule(rule)
    end
  end
    
      context 'called with auto' do
    it 'applies to auto to height' do
      rule = 'height: auto; width: 100px;'
    
          expect('.all-text-inputs-invalid').to have_ruleset(ruleset)
    end
  end
end
