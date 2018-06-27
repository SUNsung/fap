
        
            def initialize(options = {})
      @id = options[:id]
      @agent = options[:agent]
      @config = options[:config]
      @restarting = false
    end
    
        @services = current_user.services.reorder(table_sort).page(params[:page])
    
      validate :enough_poll_answers
  validates :question, presence: true
    
        on :queue_private_receive do |guid, xml, legacy=false|
      person = Person.find_by_guid(guid)
    
      describe ':fetch_public_key' do
    it 'returns a public key for a person' do
      key = DiasporaFederation.callbacks.trigger(:fetch_public_key, remote_person.diaspora_handle)
      expect(key).to be_a(OpenSSL::PKey::RSA)
      expect(key.to_s).to eq(remote_person.serialized_public_key)
    end
    
      def percent_change(today, yesterday)
    sprintf( '%0.02f', ((today-yesterday) / yesterday.to_f)*100).to_f
  end