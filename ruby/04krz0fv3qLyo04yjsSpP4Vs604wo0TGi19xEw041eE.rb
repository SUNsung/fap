
        
          def create
    raise Discourse::NotFound unless report_collection_enabled?
    
          DB.exec(<<~SQL, id: d.id, sequence: sequence, data: data)
        UPDATE drafts
           SET sequence = :sequence
             , data = :data
             , revisions = revisions + 1
         WHERE id = :id
      SQL
    else
      Draft.create!(user_id: user.id, draft_key: key, data: data, sequence: sequence)
    end
    
        def extendable?(directive)
      EXTENDABLE_DIRECTIVES.include?(directive)
    end
    
        def cache
      @cache ||= DistributedCache.new('csp_extensions')
    end
    
        def theme_policy
      policy([theme.id])
    end
    
    require_relative 'bundler'
require_relative 'rubygems'
require 'pathname'
    
      let(:unordered_config_parts) { ordered_config_parts.shuffle }
  let(:settings) { LogStash::SETTINGS }
    
    platforms = PlatformConfig.new
    
    shared_examples 'logstash update' do |logstash|
  describe 'logstash-plugin update on #{logstash.hostname}' do
    before :each do
      logstash.install({:version => LOGSTASH_VERSION})
    end
    
          Array(panes_yml).map.with_index do |pane_yml, index|
        commands =  case pane_yml
                    when Hash
                      pane_yml.values.first
                    when Array
                      pane_yml
                    else
                      pane_yml
                    end
    
      it 'creates an instance' do
    expect(subject).to be_a(Tmuxinator::Pane)
  end
    
      def is_pane
    @actual.is_a? Tmuxinator::Pane
  end
end

    
          new_exists = Tmuxinator::Config.exists?(name: new)
      question = '#{new} already exists, would you like to overwrite it?'
      if !new_exists || yes?(question, :red)
        say 'Overwriting #{new}' if Tmuxinator::Config.exists?(name: new)
        FileUtils.copy_file(existing_config_path, new_config_path)
      end
    
      describe '#render' do
    it 'renders the template' do
      expect(File).to receive(:read).at_least(:once) { 'wemux ls 2>/dev/null' }