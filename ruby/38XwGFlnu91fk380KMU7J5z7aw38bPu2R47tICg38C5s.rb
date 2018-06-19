
        
          def meta
    object.file.meta
  end
end

    
      def updated
    object.updated_at.iso8601
  end
    
      private
    
    require 'rails_helper'
    
    module Metasploit
  module Framework
    class Application < Rails::Application
      include Metasploit::Framework::CommonEngine
    
    begin
  require 'bundler/setup'
rescue LoadError
  $stderr.puts '[*] Metasploit requires the Bundler gem to be installed'
  $stderr.puts '    $ gem install bundler'
  exit(1)
end
    
        on :fetch_person_for_hcard do |guid|
      person = Person.where(guid: guid, closed_account: false).where.not(owner: nil).take
      if person
        DiasporaFederation::Discovery::HCard.new(
          guid:             person.guid,
          nickname:         person.username,
          full_name:        '#{person.profile.first_name} #{person.profile.last_name}'.strip,
          url:              AppConfig.pod_uri,
          photo_large_url:  person.image_url,
          photo_medium_url: person.image_url(:thumb_medium),
          photo_small_url:  person.image_url(:thumb_small),
          public_key:       person.serialized_public_key,
          searchable:       person.searchable,
          first_name:       person.profile.first_name,
          last_name:        person.profile.last_name
        )
      end
    end
    
              render 'admins/pods'
        end
        format.mobile { render 'admins/pods' }
        format.json { render json: pods_json }
      end
    end
    
        case params[:range]
    when 'week'
      range = 1.week
      @segment = t('admins.stats.week')
    when '2weeks'
      range = 2.weeks
      @segment = t('admins.stats.2weeks')
    when 'month'
      range = 1.month
      @segment = t('admins.stats.month')
    else
      range = 1.day
      @segment = t('admins.stats.daily')
    end
    
      private
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end