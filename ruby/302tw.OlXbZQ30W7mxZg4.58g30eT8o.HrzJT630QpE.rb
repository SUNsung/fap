
        
            Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
    # Include LoggerSilence from ActiveSupport. This is needed to silent assets
# requests with `config.assets.quiet`, because the default silence method of
# the logging gem is no-op. See: https://github.com/TwP/logging/issues/11
Logging::Logger.send :alias_method, :local_level, :level
Logging::Logger.send :alias_method, :local_level=, :level=
Logging::Logger.send :include, LoggerSilence

    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
      class Notification < ApplicationRecord
  end
    
    When /^I toggle all nsfw posts$/ do
  all('a.toggle_nsfw_state').each &:click
end
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
    Given(/^servers with the roles app and web$/) do
  begin
    vagrant_cli_command('up')
  rescue
    nil
  end
end
    
        def add_filter(filter=nil, &block)
      if block
        raise ArgumentError, 'Both a block and an object were given' if filter
    
    # Exit cleanly from an early interrupt
Signal.trap('INT') { exit 1 }
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end