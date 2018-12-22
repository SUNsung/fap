
        
                ActiveRecord::Base.connection.execute(sql)
      end
    end
  end
end

    
            Redis::Cache.with do |redis|
          redis.set(key, value, ex: timeout)
        end
    
            def importer_class
          DiffNoteImporter
        end
    
    module Gitlab
  module GithubImport
    # IssuableFinder can be used for caching and retrieving database IDs for
    # issuable objects such as issues and pull requests. By caching these IDs we
    # remove the need for running a lot of database queries when importing
    # GitHub projects.
    class IssuableFinder
      attr_reader :project, :object
    
            # attributes - A Hash containing the raw note details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
            # Builds a lfs_object
        def self.from_api_response(lfs_object)
          new({ oid: lfs_object[0], download_link: lfs_object[1] })
        end
    
              @bar2 = Agents::DotBar.new(name: 'bar2').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.propagate_immediately = true
            agent.disabled = true
            agent.save!
          },
    
        it 'can not be turned off' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
  end
end

    
          @scheduler.schedule_scheduler_agents
    
        it 'html_safes the output unless :skip_safe is passed in' do
      expect(Utils.jsonify({:foo => 'bar'})).to be_html_safe
      expect(Utils.jsonify({:foo => 'bar'}, :skip_safe => false)).to be_html_safe
      expect(Utils.jsonify({:foo => 'bar'}, :skip_safe => true)).not_to be_html_safe
    end
  end
    
      def translation_scope
    'devise.sessions'
  end
    
    class User < ActiveRecord::Base
  devise :database_authenticatable
end
    
        # Creates configuration values for Devise and for the given module.
    #
    #   Devise::Models.config(Devise::Models::DatabaseAuthenticatable, :stretches)
    #
    # The line above creates:
    #
    #   1) An accessor called Devise.stretches, which value is used by default;
    #
    #   2) Some class methods for your model Model.stretches and Model.stretches=
    #      which have higher priority than Devise.stretches;
    #
    #   3) And an instance method stretches.
    #
    # To add the class methods you need to have a module ClassMethods defined
    # inside the given class.
    #
    def self.config(mod, *accessors) #:nodoc:
      class << mod; attr_accessor :available_configs; end
      mod.available_configs = accessors
    
      it 'no raises a RuntimeError on symbols' do
    v = :sym
    lambda { v.taint }.should_not raise_error(RuntimeError)
    v.tainted?.should == false
  end
    
        it 'returns the time at which the file was modified when passed ?M' do
      Kernel.test(?M, @tmp_file).should == @tmp_file.mtime
    end
  end
    
        $Kernel_trace_var_global = 'foo'
    captured.should == 'foo'
  end
    
          @right_diff_line_number = nil
    
      test 'clean path without leading slash' do
    assert_equal '/Mordor', clean_path('Mordor')
  end
    
      s.require_paths = %w[lib]
    
      get(/.+/) do
    send_sinatra_file(request.path) {404}
  end
    
    
===============================================
 Error for category_generator.rb plugin
-----------------------------------------------
 No 'category_index.html' in source/_layouts/
 Perhaps you haven't installed a theme yet.
===============================================
    
      # Extracts raw content DIV from template, used for page description as {{ content }}
  # contains complete sub-template code on main page level
  def raw_content(input)
    /<div class='entry-content'>(?<content>[\s\S]*?)<\/div>\s*<(footer|\/article)>/ =~ input
    return (content.nil?) ? input : content
  end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end