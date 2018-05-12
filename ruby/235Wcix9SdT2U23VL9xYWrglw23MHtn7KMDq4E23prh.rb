
        
        class ApplicationSerializer < ActiveModel::Serializer
  embed :ids, include: true
    
            expect(result).to eq('hg parent --template {rev}')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('hg parent --template {rev}')
      end
    end
  end
end

    
            expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER]).to match(/cd .* && agvtool next-version -all/)
      end
    
        attr_reader :filters
    
            css('> h6').each do |node|
          node.name = 'h2'
        end
    
          # A string representation of the importer.
      # Should be overridden by subclasses.
      #
      # This is used to help debugging,
      # and should usually just show the load path encapsulated by this importer.
      #
      # @return [String]
      def to_s
        Sass::Util.abstract(self)
      end
    
      if defined? config.symbolize_keys!
    config.symbolize_keys!
  end
    
        private
    
          def all_gem_names
        core_gem_names + plugin_gem_names
      end
    
          def assert_valid_stage_names(names)
        invalid = names.find { |n| RESERVED_NAMES.include?(n) }
        return if invalid.nil?
    
    module Capistrano
  module TaskEnhancements
    def before(task, prerequisite, *args, &block)
      prerequisite = Rake::Task.define_task(prerequisite, *args, &block) if block_given?
      Rake::Task[task].enhance [prerequisite]
    end
    
          it 'selects nothing when a roles filter is present' do
        dsl.set :filter, roles: 'web'
        SSHKit::Coordinator.expects(:new).with([]).returns(@coordinator)
        dsl.on('my.server')
      end
    
      # PATCH/PUT /books/1
  # PATCH/PUT /books/1.json
  def update
    respond_to do |format|
      if @book.update(book_params)
        format.html { redirect_to @book, notice: 'Book was successfully updated.' }
        format.json { render :show, status: :ok, location: @book }
      else
        format.html { render :edit }
        format.json { render json: @book.errors, status: :unprocessable_entity }
      end
    end
  end
    
            private
    
    module RuboCop
  module Cop
    module Lint
      # Don't omit the accumulator when calling `next` in a `reduce` block.
      #
      # @example
      #
      #   # bad
      #
      #   result = (1..4).reduce(0) do |acc, i|
      #     next if i.odd?
      #     acc + i
      #   end
      #
      # @example
      #
      #   # good
      #
      #   result = (1..4).reduce(0) do |acc, i|
      #     next acc if i.odd?
      #     acc + i
      #   end
      class NextWithoutAccumulator < Cop
        MSG = 'Use `next` with an accumulator argument in a `reduce`.'.freeze
    
    Dir.chdir APP_ROOT do
  # This script is a starting point to setup your application.
  # Add necessary setup steps to this file: