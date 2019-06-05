
        
        describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
    describe DefaultScenarioImporter do
  let(:user) { users(:bob) }
  describe '.import' do
    it 'imports a set of agents to get the user going when they are first created' do
      mock(DefaultScenarioImporter).seed(is_a(User))
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      DefaultScenarioImporter.import(user)
    end
    
          @scheduler.schedule_scheduler_agents
    
        it 'should generate the correct specific tracking url' do
      @checker.options['path'] = 'trackings/usps/9361289878905919630610'
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/trackings/usps/9361289878905919630610')
    end
    
        def show
      authorize @user, :change_email?
    end
    
      def self.provides_callback_for(provider)
    provider_id = provider.to_s.chomp '_oauth2'
    
    module ExportControllerConcern
  extend ActiveSupport::Concern
    
      def preferred_locale
    http_accept_language.preferred_language_from(available_locales)
  end
    
    class MediaProxyController < ApplicationController
  include RoutingHelper
    
      # Wraps a string in escaped quotes if it contains whitespace.
  def quote
    /\s/ =~ self ? '\'#{self}\'' : '#{self}'
  end
    
    class Scene
  def initialize
    @spheres = Array.new
    @spheres[0] = Sphere.new(Vec.new(-2.0, 0.0, -3.5), 0.5)
    @spheres[1] = Sphere.new(Vec.new(-0.5, 0.0, -3.0), 0.5)
    @spheres[2] = Sphere.new(Vec.new(1.0, 0.0, -2.2), 0.5)
    @plane = Plane.new(Vec.new(0.0, -0.5, 0.0), Vec.new(0.0, 1.0, 0.0))
  end
    
    def to_array(proc)
  array = []
    
    def mkboard
  (0...ROW*COL).each{|i|
    if i % ROW >= ROW-NP
      $b[i] = -2
    else
      $b[i] = -1
    end
    $b[3*ROW+3]=$b[3*ROW+4]=$b[4*ROW+3]=$b[4*ROW+4]=-2
  }
end