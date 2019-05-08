
        
        describe 'Creating a new agent', js: true do
  before(:each) do
    login_as(users(:bob))
  end
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
      before(:each) do
    stub_request(:get, /events.json$/).to_return(
      :body => File.read(Rails.root.join('spec/data_fixtures/basecamp.json')),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    stub_request(:get, /projects.json$/).to_return(
      :body => JSON.dump([{name: 'test', id: 1234},{name: 'test1', id: 1235}]),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    stub_request(:get, /02:00$/).to_return(
      :body => File.read(Rails.root.join('spec/data_fixtures/basecamp.json')),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    @valid_params = { :project_id => 6789 }
    
    module Admin
  class ChangeEmailsController < BaseController
    before_action :set_account
    before_action :require_local_account!
    
      before_action :set_account
  respond_to :txt
    
    
end
end
end

    
        head + [data.length].pack('v') + data
  end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a principal, an asset (e.g., a
        # workstation user or a network server) on a network.
        class Element
    
              # Decodes the crealm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_crealm(input)
            input.value[0].value
          end
    
              # Decodes the cusec field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_cusec(input)
            input.value[0].value
          end
    
      until to_boolean(IS_EMPTY[proc])
    array.push(FIRST[proc])
    proc = REST[proc]
  end
    
    $pnum=[]
def setpiece(a,pos)
  if a.length == $p.length then
    $no += 1
    pboard
    return
  end
  while $b[pos] != -1
    pos += 1
  end
  ($pnum - a).each do |i|
    $p[i].each do |x|
      f = 0
      x.each{|s|
        if $b[pos+s] != -1
          f=1
          break
        end
      }
      if f == 0 then
        x.each{|s|
          $b[pos+s] = i
        }
        a << i
        setpiece(a.dup, pos)
        a.pop
        x.each{|s|
          $b[pos+s] = -1
        }
      end
    end
  end
end
    
      # Send deprecation notices to registered listeners.
  config.active_support.deprecation = :notify