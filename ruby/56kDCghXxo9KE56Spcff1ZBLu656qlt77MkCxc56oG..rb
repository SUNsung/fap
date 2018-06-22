
        
              raise Discourse::InvalidParameters.new(:to_address) unless args[:to_address].present?
    
      private
    
            expect_updated_sign_in_at(user)
        expect(Redis.current.get('account:#{user.account_id}:regeneration')).to eq 'true'
        expect(RegenerationWorker).to have_received(:perform_async)
      end
    
    Bootstrap.load!

    
        @save_to.each { |_, v| FileUtils.mkdir_p(v) }
    
    desc 'Compile bootstrap-sass to tmp/ (or first arg)'
task :compile, :css_path do |t, args|
  require 'sass'
  require 'term/ansicolor'
    
      def full_plugin_name
    @full_plugin_name ||= 'logstash-#{type}-#{name.downcase}'
  end
end

    
              def plugins
            @plugins ||= find_plugins_gem_specs.map do |spec|
              { :name => spec.name, :version => spec.version.to_s }
            end.sort_by do |spec|
              spec[:name]
            end
          end