
        
            group.add(moderator)
    group.save
    
    BadgeGrouping.seed do |g|
  g.id = BadgeGrouping::GettingStarted
  g.name = 'Getting Started'
  g.default_position = 10
end
    
        describe '#build_trains failing' do
      # it 'automatically re-tries the request when getting a ITC.response.error.OPERATION_FAILED when receive build trains' do
      #   # Ensuring the fix for https://github.com/fastlane/fastlane/issues/6419
    
          return if config_value.nil?
    
        def test_results
      temp_junit_report = Scan.cache[:temp_junit_report]
      return File.read(temp_junit_report) if temp_junit_report && File.file?(temp_junit_report)
    
    # The * turns the array into a parameter list
# This is using the form of exec which takes a variable parameter list, e.g. `exec(command, param1, param2, ...)`
# We need to use that, because otherwise invocations like
# `spaceauth -u user@fastlane.tools` would recognize '-u user@fastlane.tools' as a single parameter and throw errors
exec(*exec_arr)

    
        def translation_scope
      'devise.unlocks'
    end
end

    
      # Attempt to find the mapped route for devise based on request path
  def devise_mapping
    @devise_mapping ||= request.env['devise.mapping']
  end
    
    begin
  require 'bundler/inline'
rescue LoadError => e
  $stderr.puts 'Bundler version 1.10 or later is required. Please update your Bundler'
  raise e
end
    
        def byte_to_str_pos(pos)
      @s.string.byteslice(0, pos).length
    end
    
    Rake::TestTask.new(:'test:core') do |t|
  core_tests = %w[base delegator encoding extensions filter
     helpers mapped_error middleware radius rdoc
     readme request response result route_added_hook
     routing server settings sinatra static templates]
  t.test_files = core_tests.map {|n| 'test/#{n}_test.rb'}
  t.ruby_opts = ['-r rubygems'] if defined? Gem
  t.ruby_opts << '-I.'
  t.warning = true
end
    
      # retrieve only the latest spec for all locally installed plugins
  # @return [Hash] result hash {plugin_name.downcase => plugin_spec}
  def find_latest_gem_specs
    LogStash::PluginManager.all_installed_plugins_gem_specs(gemfile).inject({}) do |result, spec|
      previous = result[spec.name.downcase]
      result[spec.name.downcase] = previous ? [previous, spec].max_by{|s| s.version} : spec
      result
    end
  end
end
